#include "SurgeonViewController.h"
#include "private/muk.pch"

#include "AppControllers.h"
#include "AlgorithmController.h"
#include "InteractionController.h"
#include "PlanningController.h"
#include "ProblemDefinitionController.h"
#include "PropertyController.h"
#include "ToolBarController.h"

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

#include <vtkMetaImageReader.h>

#include <boost/filesystem.hpp>

namespace gris
{
	namespace muk
	{

		SurgeonViewController::SurgeonViewController() : BaseController()
		{
			mpInputControl			= new SurgeonViewInputController();
			mpSegmentationControl	= new SurgeonViewSegmentationController();
			mpPlanningControl		= new SurgeonViewPlanningController();
		}



		void SurgeonViewController::setControls(AppControllers* pControls)
		{
			BaseController::setControllers(pControls);

			mpInputControl->setControllers(pControls);
			mpSegmentationControl->setControllers(pControls);
			mpPlanningControl->setControllers(pControls);

		}

		void SurgeonViewController::setModels(AppModels* pModels)
		{
			BaseController::setModels(pModels); 

			mpInputControl->setModels(pModels);
			mpSegmentationControl->setModels(pModels);
			mpPlanningControl->setModels(pModels);
		}

		void SurgeonViewController::setMainWindow(MuknoPlannerMainWindow* pWindow)
		{
			BaseController::setMainWindow(pWindow);

			mpInputControl->setMainWindow(pWindow);
			mpSegmentationControl->setMainWindow(pWindow);
			mpPlanningControl->setMainWindow(pWindow);
		}

		void SurgeonViewController::setupConnections()
		{
			mpInputControl->setupConnections();
			mpSegmentationControl->setupConnections();
			mpPlanningControl->setupConnections();

		}

		/**
		*/
		void SurgeonViewController::initialize()
		{
			mpInputControl->initialize();
			mpSegmentationControl->initialize();
			mpPlanningControl->initialize();
		}

	} // namespace muk
} // namespace gris
