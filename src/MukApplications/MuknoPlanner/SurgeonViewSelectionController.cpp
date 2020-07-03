#include "SurgeonViewSelectionController.h"
#include "MukQt/SurgeonViewSelection.h"
#include "private/muk.pch"

#include "AppControllers.h"
#include "AlgorithmController.h"
#include "InteractionController.h"
#include "PlanningController.h"
#include "ProblemDefinitionController.h"
#include "PropertyController.h"
#include "SelectionController.h"
#include "ToolBarController.h"
#include "ProblemDefinitionController.h"
#include "SelectionController.h"
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
#include "MukQt/TabSelection.h"

#include <vtkMetaImageReader.h>

#include <boost/filesystem.hpp>

namespace gris
{
	namespace muk
	{
		void SurgeonViewSelectionController::initialize()
		{
		}

		void SurgeonViewSelectionController::setupConnections()
		{
			connect(mpMainWindow->sWidgetSelection, &SurgeonViewSelection::autofillCanalsRequested, this, &SurgeonViewSelectionController::autoFillCanals); 
			connect(mpMainWindow->sWidgetSelection, &SurgeonViewSelection::toggleCtOverlayRequested, this, &SurgeonViewSelectionController::toggleCtOverlay);
			connect(mpMainWindow->sWidgetSelection, &SurgeonViewSelection::obstaclePathAnalysisRequested, this, &SurgeonViewSelectionController::obstaclePathAnalysis);
			connect(mpMainWindow->sWidgetSelection, &SurgeonViewSelection::fillOutRequested, this, &SurgeonViewSelectionController::fillOutBestPaths);
			connect(mpMainWindow->sWidgetSelection, &SurgeonViewSelection::displayPathPropertiesRequested, this, &SurgeonViewSelectionController::fillOutInformationSinglePath);			
		}	

		void SurgeonViewSelectionController::enableWidget() 
		{
	//		fillOutBestPaths();
		}

		void SurgeonViewSelectionController::fillOutInformationSinglePath()
		{
			int pathId = mpMainWindow->sWidgetSelection->activePath;
			std::string info= mpControls->mpSelectControl->getPathInformation(pathId); 
			mpMainWindow->sWidgetSelection->fillOutSinglePathDetails(info);
		}


		void SurgeonViewSelectionController::autoFillCanals()
		{
			mpControls->mpSelectControl->autoFillCanals();			
		}

		void SurgeonViewSelectionController::toggleCtOverlay()
		{
			mpControls->mpSelectControl->toggleCTOverlay();
		}

		void SurgeonViewSelectionController::obstaclePathAnalysis()
		{
			mpModels->pPlanningModel->setActivePathIdx(0); 
			mpControls->mpSelectControl->singlePathSelectionChanged(0);

			LOG_LINE << "active path collection: " << mpModels->pPlanningModel->getActivePathCollection();
			LOG_LINE << "active path: " << mpModels->pPlanningModel->getActivePathIdx();
			mpControls->mpSelectControl->quickPathAnalysis();
		}

		void SurgeonViewSelectionController::fillOutBestPaths()
		{
			mpMainWindow->switchTabToSelection();
			
			std::array<double, 2> values = { 0,0 };

			values = mpControls->mpSelectControl->findShortestPath();
			mpMainWindow->sWidgetSelection->fillOutShortestPath(values.at(0), values.at(1));

			values = mpControls->mpSelectControl->findLargestDistance();
			mpMainWindow->sWidgetSelection->fillOutLargestDistance(values.at(0), values.at(1));

			values = mpControls->mpSelectControl->findStraightesPath();
			mpMainWindow->sWidgetSelection->fillOutStraighestPath(values.at(0), values.at(1));

			values = mpControls->mpSelectControl->findSmallestGoalAngle();
			mpMainWindow->sWidgetSelection->fillOutSmallestGoalAngle(values.at(0), values.at(1));

			fillOutInformationSinglePath();


		}



	} // namespace muk
} // namespace gris
