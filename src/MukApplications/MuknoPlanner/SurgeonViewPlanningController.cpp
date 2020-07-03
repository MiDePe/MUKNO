#include "SurgeonViewPlanningController.h"
#include "SurgeonViewPlanning.h"
#include "private/muk.pch"

#include "AppControllers.h"
#include "AlgorithmController.h"
#include "InteractionController.h"
#include "PlanningController.h"
#include "ProblemDefinitionController.h"
#include "SelectionController.h"
#include "PropertyController.h"
#include "ToolBarController.h"
#include "ProblemDefinitionController.h"
#include "SurgeonViewSelectionController.h"
#include "SurgeonConfiguration.h"


#include "MukAppModels/ApplicationModel.h"
#include "MukAppModels/LocalEnvironment.h"
#include "MukAppModels/PlanningModel.h"
#include "MukAppModels/ProblemDefinitionModel.h"
#include "MukAppModels/VisualizationModel.h"
#include "MukAppModels/WorldVisualizationModel.h"

#include "MukCommon/MukScene.h"
#include "MukCommon/PathCollection.h"
#include "MukCommon/vtk_tools.h"

#include "MukImaging/MukImagingIO.h"

#include "MukPathPlanning/InterpolatorLinear.h"

#include "MukVisualization/VisScene.h"
#include "MukVisualization/VisObstacle.h"
#include "MukVisualization/VisPathCollection.h"

#include "MukQt/MukQToolBar.h"
#include "MukQt/MukQMenuBar.h"
#include "MukQt/ToolbarSurgeonModel.h"
#include "MukQt/MuknoPlannerMainWindow.h"
#include "MukQt/SurgeonViewInput.h"
#include "MukQt/TabPlanning.h"

#include <vtkMetaImageReader.h>

#include <boost/filesystem.hpp>

namespace gris
{
	namespace muk
	{
		void SurgeonViewPlanningController::initialize()
		{


		}

		void SurgeonViewPlanningController::setupConnections()
		{
			connect(mpMainWindow->sWidgetPlanning, &SurgeonViewPlanning::setupPlanningViewRequested, this, &SurgeonViewPlanningController::setupViewTemporalBone);
			connect(mpMainWindow->sWidgetPlanning, &SurgeonViewPlanning::resetPlanningViewRequested, this, &SurgeonViewPlanningController::resetViewTemporalBone);
			connect(mpMainWindow->sWidgetPlanning, &SurgeonViewPlanning::planningStartRegionSingleRequested, this, &SurgeonViewPlanningController::addStartRegionSingle);
			connect(mpMainWindow->sWidgetPlanning, &SurgeonViewPlanning::planningStartRegionMultiRequested, this, &SurgeonViewPlanningController::addStartRegionMulti);
			connect(mpMainWindow->sWidgetPlanning, &SurgeonViewPlanning::planningGoalRegionSingleRequested, this, &SurgeonViewPlanningController::addGoalRegionSingle);
			connect(mpMainWindow->sWidgetPlanning, &SurgeonViewPlanning::planningGoalRegionMultiRequested, this, &SurgeonViewPlanningController::addGoalRegionMulti);
			connect(mpMainWindow->sWidgetPlanning, &SurgeonViewPlanning::planningCreatePathsRequested, this, &SurgeonViewPlanningController::createPaths);

			connect(mpMainWindow->sWidgetInput, &SurgeonViewInput::startSegmentationClicked, this, &SurgeonViewPlanningController::initialize);
			connect(mpMainWindow->sWidgetInput, &SurgeonViewInput::loadDefaultSegmentationDataClicked, this, &SurgeonViewPlanningController::initialize);
			
			connect(mpControls->mpProbDefControl.get(), &ProblemDefinitionController::startRegionAdded, this, &SurgeonViewPlanningController::markStartRegionAsAdded);
			connect(mpControls->mpProbDefControl.get(), &ProblemDefinitionController::goalRegionAdded, this, &SurgeonViewPlanningController::markGoalRegionAsAdded);
			connect(mpControls->mpPlanningController.get(), &PlanningController::pathsCreated, this, &SurgeonViewPlanningController::markPathsAsCreated);
			connect(mpControls->mpPlanningController.get(), &PlanningController::pathsCreated, this, &SurgeonViewPlanningController::initSurgeonSelectionController);


		}	

		void SurgeonViewPlanningController::markStartRegionAsAdded()
		{
			mpMainWindow->sWidgetPlanning->markStartRegionAsAdded();
			startRegionAdded = true;
		}

		void SurgeonViewPlanningController::markGoalRegionAsAdded()
		{
			mpMainWindow->sWidgetPlanning->markGoalRegionAsAdded();
			goalRegionAdded = true;
		}

		void SurgeonViewPlanningController::markPathsAsCreated()
		{
			mpMainWindow->sWidgetPlanning->markPathsAsCreated();
		}


		void SurgeonViewPlanningController::setupViewTemporalBone()
		{

			LOG_LINE << "startRegion: " << mpModels->pProbDefModel->hasStartRegion();
			LOG_LINE << "goalRegion: " << mpModels->pProbDefModel->hasGoalRegion();


			std::shared_ptr<VisObstacle> obstSkull = mpModels->pVisModel->getVisScene()->getObstacle("Skull");
			obstSkull->setVisibility(false);

			std::shared_ptr<VisObstacle> obstBrain = mpModels->pVisModel->getVisScene()->getObstacle("Brain");
			obstBrain->setOpacity(0.1);

			mpModels->pVisModel->focus3dWindowOnObstacle("Cochlea");
			mpModels->pWorldVisModel->render();
		}

		void SurgeonViewPlanningController::resetViewTemporalBone()
		{
			LOG_LINE << "startRegion: " << mpModels->pProbDefModel->hasStartRegion();
			LOG_LINE << "goalRegion: " << mpModels->pProbDefModel->hasGoalRegion();

			std::shared_ptr<VisObstacle> obstSkull = mpModels->pVisModel->getVisScene()->getObstacle("Skull");
			obstSkull->setVisibility(true);

			std::shared_ptr<VisObstacle> obstBrain = mpModels->pVisModel->getVisScene()->getObstacle("Brain");
			obstBrain->setOpacity(1);

			mpModels->pVisModel->focus3dWindowOnCenter();
			mpModels->pWorldVisModel->render();
		}


		void SurgeonViewPlanningController::addStartRegionSingle()
		{
			mpControls->mpProbDefControl->addStartRegion();
			LOG_LINE << "startRegion: " << mpModels->pProbDefModel->hasStartRegion();
		}

		void SurgeonViewPlanningController::initSurgeonSelectionController()
		{
			mpControls->mpSVSelectionControl->enableWidget();
		}


		void SurgeonViewPlanningController::addStartRegionMulti()
		{
			mpControls->mpInteract->setInteraction("SurfaceRegionInteraction");
		}


		void SurgeonViewPlanningController::addGoalRegionSingle()
		{
			mpControls->mpProbDefControl->addGoalRegion();
			LOG_LINE << "Model 2 startRegion: " << mpModels->pProbDefModel->hasStartRegion();
			LOG_LINE << "Model goalRegion: " << mpModels->pProbDefModel->hasGoalRegion();
		}


		void SurgeonViewPlanningController::addGoalRegionMulti()
		{
			mpControls->mpInteract->setInteraction("SurfaceRegionInteraction");
		}


		void SurgeonViewPlanningController::createPaths()
		{
			if (!startRegionAdded)
			{
				QMessageBox* errorMessage = new QMessageBox();
				errorMessage->setText("Please add a start region.");
				errorMessage->show();
				return;
			}

			if (!goalRegionAdded)
			{
				QMessageBox* errorMessage = new QMessageBox();
				errorMessage->setText("Please add a goal region.");
				errorMessage->show();
				return;
			}

			SurgeonConfiguration config; 


			//mpControls->mpPlanningController->set Pluner, Planner, Interpolar
			mpControls->mpPlanningController->updateProblemDefinition(config.PATHCOLLECTION_NAME);
			mpControls->mpPlanningController->createPaths(config.PATHCOLLECTION_NAME, mpMainWindow->sWidgetPlanning->getPathCount());
			
			mpModels->pPlanningModel->setActivePathIdx(0);
			mpControls->mpSelectControl->singlePathSelectionChanged(0);

			LOG_LINE << "active path collection: " << mpModels->pPlanningModel->getActivePathCollection();
			LOG_LINE << "active path: " << mpModels->pPlanningModel->getActivePathIdx();

			mpMainWindow->mToolBarSurgeon->pipelineEnableSelection();
			mpMainWindow->mToolBarSurgeon->pipelineEnableNavigation();
			mpControls->mpSVSelectionControl->fillOutBestPaths();
		}



	} // namespace muk
} // namespace gris
