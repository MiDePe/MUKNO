#include "private/muk.pch"
#include "SurgeonViewSegmentationController.h"
#include "private/muk.pch"

#include "AppControllers.h"
#include "AlgorithmController.h"
#include "InteractionController.h"
#include "PlanningController.h"
#include "ProblemDefinitionController.h"
#include "PropertyController.h"
#include "ToolBarController.h"
#include "SurgeonViewInputController.h"
#include "SurgeonViewInput.h"

#include "MukAppModels/ApplicationModel.h"
#include "MukAppModels/LocalEnvironment.h"
#include "MukAppModels/PlanningModel.h"
#include "MukAppModels/ProblemDefinitionModel.h"
#include "MukAppModels/VisualizationModel.h"
#include "MukAppModels/WorldVisualizationModel.h"

#include "MukCommon/MukScene.h"
#include "MukCommon/PathCollection.h"
#include "MukCommon/vtk_tools.h"
#include "MukCommon/MukObstacle.h"

#include "MukImaging/MukImagingIO.h"

#include "MukPathPlanning/InterpolatorLinear.h"

#include "MukVisualization/VisScene.h"
#include "MukVisualization/VisPathCollection.h"
#include "MukVisualization/VisObstacle.h"

#include "MukQt/MukQToolBar.h"
#include "MukQt/MukQMenuBar.h"
#include "MukQt/ToolbarSurgeonModel.h"
#include "MukQt/MuknoPlannerMainWindow.h"
#include "MukQt/TabPlanning.h"
#include "MukQt/SurgeonViewSegmentation.h"

#include <vtkMetaImageReader.h>

#include <boost/filesystem.hpp>

#include <QtWidgets>


namespace gris
{
	namespace muk
	{
		void SurgeonViewSegmentationController::setupConnections()
		{
			connect(mpMainWindow->sWidgetSegmentation, &SurgeonViewSegmentation::obstacleVisibilityRequested, this, &SurgeonViewSegmentationController::setObstaclesVisible);
			connect(mpMainWindow->sWidgetSegmentation, &SurgeonViewSegmentation::obstacleOpacityRequested, this, &SurgeonViewSegmentationController::setObstaclesOpacity);
			connect(mpMainWindow->sWidgetSegmentation, &SurgeonViewSegmentation::focusOnObstacleRequested, this, &SurgeonViewSegmentationController::focusOnObstacle);
		}

		void SurgeonViewSegmentationController::loadObstacles()
		{
			auto* pScene = mpModels->pAppModel->getScene().get();
			std::vector<std::shared_ptr<MukObstacle>> obstacles = pScene->getObstacles();
			std::vector<std::shared_ptr<VisObstacle>> visObstacles = mpModels->pVisModel->getVisScene()->getObstacles();

			mpMainWindow->sWidgetSegmentation->loadObstacles(obstacles, visObstacles);
			mpModels->pVisModel->reset3DWindow();
			mpModels->pVisModel->focus3dWindowOnCenter();
			mpModels->pWorldVisModel->render();
		}	

		void SurgeonViewSegmentationController::focusOnObstacle(QString obstacleName)
		{
			mpModels->pVisModel->focus3dWindowOnObstacle(obstacleName.toStdString());
			mpModels->pWorldVisModel->render();
		}

		void SurgeonViewSegmentationController::setObstaclesVisible(QString obstacleName, bool visible)
		{
			std::shared_ptr<VisObstacle> visObstacle = mpModels->pVisModel->getVisScene()->getObstacle(obstacleName.toStdString());
			visObstacle->setVisibility(visible);

			mpModels->pWorldVisModel->render();
		}


		void SurgeonViewSegmentationController::setObstaclesOpacity(QString obstacleName, double opacity)
		{
			std::shared_ptr<VisObstacle> visObstacle = mpModels->pVisModel->getVisScene()->getObstacle(obstacleName.toStdString());
			visObstacle->setOpacity(opacity);

			mpModels->pWorldVisModel->render();
		}

	} // namespace muk
} // namespace gris
