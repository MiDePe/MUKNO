#include "SurgeonViewInputController.h"
#include "SurgeonViewInput.h"
#include "private/muk.pch"
#include "MuknoPlannerMainWindow.h"

#include "AppControllers.h"
#include "AlgorithmController.h"
#include "InteractionController.h"
#include "PlanningController.h"
#include "ProblemDefinitionController.h"
#include "PropertyController.h"
#include "ToolBarController.h"
#include "VisualizationController.h"
#include "SurgeonViewSegmentationController.h"

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
#include "MukVisualization/VisPathCollection.h"

#include "MukQt/MukQToolBar.h"
#include "MukQt/MukQMenuBar.h"
#include "MukQt/ToolbarSurgeonModel.h"
#include "MukQt/MuknoPlannerMainWindow.h"
#include "MukQt/TabPlanning.h"
#include "MukQt/SurgeonViewInput.h"

#include <vtkMetaImageReader.h>

#include <boost/filesystem.hpp>

namespace gris
{
	namespace muk
	{

		void SurgeonViewInputController::setupConnections()
		{
			//view to controller 
			connect(mpMainWindow->sWidgetInput, &SurgeonViewInput::loadCtDataClicked, this, &SurgeonViewInputController::loadCtData);
			connect(mpMainWindow->sWidgetInput, &SurgeonViewInput::load3DModelsClicked, this, &SurgeonViewInputController::loadSingle3DModel);
			connect(mpMainWindow->sWidgetInput, &SurgeonViewInput::loadSegmentationDataClicked, this, &SurgeonViewInputController::loadSegmentationData);			
			connect(mpMainWindow->sWidgetInput, &SurgeonViewInput::startButtonClicked, this, &SurgeonViewInputController::prepareWidgetSegmentation);		

			connect(mpMainWindow->sWidgetInput, &SurgeonViewInput::loadDefaultSegmentationDataClicked, this, &SurgeonViewInputController::loadDefaultSegmentationData);
			connect(mpMainWindow->sWidgetInput, &SurgeonViewInput::startSegmentationClicked, this, &SurgeonViewInputController::startSegmentation);

			//load empty scene
			SurgeonConfiguration config;
			std::string filepathScene = config.FILEPATH_SCENE_EMPTY;
			mpControls->mpToolbar->loadScene(filepathScene);
			mpControls->mpPlanningController->addPathCollection(config.PATHCOLLECTION_NAME);
		}



		void SurgeonViewInputController::loadCtData(const std::string& filename)
		{
			QApplication::setOverrideCursor(Qt::WaitCursor);
			if (!boost::filesystem::is_regular_file(filename))
				throw MUK_EXCEPTION("file does not exist", filename.c_str());
			auto reader = make_vtk<vtkMetaImageReader>();
			reader->SetFileName(filename.c_str());
			reader->Update();
			mpModels->pWorldVisModel->setCtImage(reader->GetOutput());
			mpModels->pWorldVisModel->render();

			ctLoaded = true;

			mpMainWindow->sWidgetInput->markCtAsEntered();
			QApplication::setOverrideCursor(Qt::ArrowCursor);
		}


		void SurgeonViewInputController::loadSegmentationData(const std::string& filename)
		{
			QApplication::setOverrideCursor(Qt::WaitCursor);
			if (!boost::filesystem::is_regular_file(filename))
				throw MUK_EXCEPTION("file does not exist", filename.c_str());
			auto reader = make_vtk<vtkMetaImageReader>();
			reader->SetFileName(filename.c_str());
			reader->Update();
			mpModels->pWorldVisModel->setSegmentationImage(reader->GetOutput());
			mpModels->pWorldVisModel->render();
			//mpModels->pCtVisModel->riskStructureDataLoaded();

			segmentationLoaded = true;
			mpMainWindow->sWidgetInput->markSegmentationAsEntered();
			QApplication::setOverrideCursor(Qt::ArrowCursor);
		}

		void SurgeonViewInputController::loadDefaultSegmentationData()
		{
			QApplication::setOverrideCursor(Qt::WaitCursor);
			SurgeonConfiguration config;

			//load default scene			
			std::string filepathScene = config.FILEPATH_SCENE_TEMPORAL_BONE;
			std::string filepathSegmentation = config.FILEPATH_SEGMENTATION;
			mpControls->mpToolbar->loadScene(filepathScene);

			//open widget Segmentation when finished
			mpMainWindow->pipelineEnableSegmentation();
			mpControls->mpSVSegmentationControl->loadObstacles();

			//show Segmentation in medical windows
			loadSegmentationData(filepathSegmentation);
			
			segmentationLoaded = true;
			mpMainWindow->sWidgetInput->markSegmentationAsEntered();
			QApplication::setOverrideCursor(Qt::ArrowCursor);
		}


		void SurgeonViewInputController::loadSingle3DModel(const std::string& filename)
		{
			QApplication::setOverrideCursor(Qt::WaitCursor);
			SurgeonConfiguration config;
			mpModels->pAppModel->loadObstacle(filename);
			mpModels->pVisModel->synchronize(*mpModels->pAppModel->getScene());
			mpControls->mpPropControl->initSceneWidget();

			////////////////////////
			auto* pScene = mpModels->pAppModel->getScene().get();
			std::vector<std::shared_ptr<MukObstacle>> obstacles = pScene->getObstacles();
			std::vector<std::shared_ptr<VisObstacle>> visObstacles = mpModels->pVisModel->getVisScene()->getObstacles();

			double colors[12][3] = { { 0.666667,0.666667,1 },{ 0,1,1 },{ 0,1,0 },{ 0.666667,0.666667,0.498039 },{ 1,1,0.5 },{ 1,0,1 },{ 1,0,0 },{ 0,0,1 },{ 0.666667,0,1 },{ 1,0.68,0 },{ 1,0.666667,0.498039 },{ 0.5,0.5,0.5 } };
			for (int i = 0; i < visObstacles.size(); i++) {
				visObstacles.at(i)->setDefaultColor(colors[i]);
				visObstacles.at(i)->setColors(colors[i]);
			}

			mpModels->pVisModel->reset3DWindow();
			mpModels->pVisModel->focus3dWindowOnCenter();
			mpModels->pWorldVisModel->render();
			///////////////////////////////

			mpMainWindow->sWidgetInput->mark3DModelsAsEntered();
			obstacleLoaded = true;
			QApplication::setOverrideCursor(Qt::ArrowCursor);
		}

		void SurgeonViewInputController::prepareWidgetSegmentation()
		{
			if (!ctLoaded)
			{
				QMessageBox msgBox;
				msgBox.setInformativeText("Please load a CT file.");
				msgBox.setStandardButtons(QMessageBox::Ok);
				msgBox.exec();
				return;
			}

			if (!segmentationLoaded)
			{
				QMessageBox msgBox;
				msgBox.setInformativeText("Please load a segmentation file.");
				msgBox.setStandardButtons(QMessageBox::Ok);
				msgBox.exec();
				return;
			}
				
			if (!obstacleLoaded)
			{
				QMessageBox msgBox;
				msgBox.setInformativeText("Please load one or more 3D models.");
				msgBox.setStandardButtons(QMessageBox::Ok);
				msgBox.exec();
				return;
			}	

			mpMainWindow->pipelineEnableSegmentation();
			mpControls->mpSVSegmentationControl->loadObstacles();
			emit segmentationStarted();
		}



		void SurgeonViewInputController::startSegmentation()
		{
			QApplication::setOverrideCursor(Qt::WaitCursor);
			SurgeonConfiguration config;

			//load default scene			
			std::string filepathScene = config.FILEPATH_SCENE_TEMPORAL_BONE;
			std::string filepathSegmentation = config.FILEPATH_SEGMENTATION;
			mpControls->mpToolbar->loadScene(filepathScene);

			//load algorithm
			std::string filepathAlgorithm = config.FILEPATH_ALGORITHM;
			mpControls->mpAlgorithmController->loadAlgorithm(filepathAlgorithm, false);

			//start algorithm
			mpControls->mpAlgorithmController->executePipeline();

			//open widget Segmentation when finished
			mpMainWindow->pipelineEnableSegmentation();
			mpControls->mpSVSegmentationControl->loadObstacles();

			//show Segmentation in medical windows
		//	loadSegmentationData(filepathSegmentation);
			mpModels->pWorldVisModel->showSegmentation();


			/*size_t noAlgoOutputs = mpModels->pWorldVisModel->numberOfAlgorithmOutputs();
			std::shared_ptr<VisAbstractObject> out = mpModels->pWorldVisModel->getAlgorithmOutput(noAlgoOutputs);
			mpControls->mpVisControl->addAbstractObject(out);
			mpModels->pWorldVisModel->setSegmentationImage(out);
			mpModels->pWorldVisModel->render();*/


			QApplication::setOverrideCursor(Qt::ArrowCursor);
			segmentationLoaded = true;
			mpMainWindow->sWidgetInput->markSegmentationAsEntered();
		}

	} // namespace muk
} // namespace gris
