#pragma once

#include "SurgeonView.h"
#include "SurgeonViewInput.h"
#include "SurgeonViewSegmentation.h"
#include "SurgeonViewPlanning.h"

#include "SurgeonViewInputController.h"
#include "SurgeonViewSegmentationController.h"
#include "SurgeonViewPlanningController.h"

#include "BaseController.h"

namespace gris
{
	namespace muk
	{
		class SurgeonViewController : public BaseController
		{
			Q_OBJECT


		public:
			SurgeonViewController();

			void setModels(AppModels* pModels);
			void setControls(AppControllers* pControls);
			void setMainWindow(MuknoPlannerMainWindow* pWindow);
			void setupConnections();
			void initialize();

			//Views
			SurgeonView*				mpSurgeonView;
			SurgeonViewInput*			mpInputView;
			SurgeonViewSegmentation*	mpSegmentationView;
			SurgeonViewPlanning*		mpPlanningView;

			//Controller
			SurgeonViewInputController*			mpInputControl;
			SurgeonViewSegmentationController*	mpSegmentationControl;
			SurgeonViewPlanningController*		mpPlanningControl;

		};
	}
}

