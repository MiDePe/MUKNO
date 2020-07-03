#include "SurgeonViewNavigationController.h"
#include "SurgeonViewNavigation.h"
#include "private/muk.pch"

#include "AppControllers.h"
#include "AlgorithmController.h"
#include "InteractionController.h"
#include "PlanningController.h"
#include "ProblemDefinitionController.h"
#include "PropertyController.h"
#include "ToolBarController.h"
#include "ProblemDefinitionController.h"
#include "NavigationThread.h"

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
		void SurgeonViewNavigationController::initialize()
		{
				
		}

		void SurgeonViewNavigationController::setupConnections()
		{ 
			connect(mpMainWindow->sWidgetNavigation, &SurgeonViewNavigation::dummyRunRequested, this, &SurgeonViewNavigationController::toggleRunStop); 
			//connect(mpMainWindow->sWidgetNavigation, &SurgeonViewNavigation::dummyStopRequested, this, &SurgeonViewNavigationController::toggleRunStop);
			connect(mpMainWindow->sWidgetNavigation, &SurgeonViewNavigation::dummyStepForwardRequested, this, &SurgeonViewNavigationController::stepForward);
			//connect(mpMainWindow->sWidgetNavigation, &SurgeonViewNavigation::dummyStepBackwardsRequested, this, &SurgeonViewNavigationController::stepBackwards);
			connect(mpMainWindow->sWidgetNavigation, &SurgeonViewNavigation::dummyCalibrateRequested, this, &SurgeonViewNavigationController::calibrate);
		
			/*
			in NaviThread:
		  connect(mpMainWindow->sWidgetNavigation, &SurgeonViewNavigation::initRequested, this, &NavigationThread::init);
		  connect(mpMainWindow->sWidgetNavigation, &SurgeonViewNavigation::dummyRunRequested, &mWorkerInterface, &WorkerInterface::requestStart);
		  connect(mpMainWindow->sWidgetNavigation, &SurgeonViewNavigation::dummyStopRequested, &mWorkerInterface, &WorkerInterface::requestStop);
		  connect(mpMainWindow->sWidgetNavigation, &SurgeonViewNavigation::dummyStepForwardRequested, &mWorkerInterface, &WorkerInterface::requestProceed);
	 
		*/
		}	

	

		void SurgeonViewNavigationController::toggleRunStop()
		{
			if (!initialized)
			{
				mpControls->mpNaviThread->initialize();
				mpControls->mpNaviThread->run();

				emit initRequested();
				initialized = true;
			}
			if (!running)
			{
				emit dummyRunRequested();
				running = false;
			}
			else
			{
				emit dummyStopRequested();
				running = true;
			}

		}

		void SurgeonViewNavigationController::stepForward()
		{
			emit dummyStepForwardRequested();
		}

		void SurgeonViewNavigationController::stepBackwards()
		{

		}

		void SurgeonViewNavigationController::calibrate()
		{
			emit dummyCalibrateRequested();
		}


	} // namespace muk
} // namespace gris
