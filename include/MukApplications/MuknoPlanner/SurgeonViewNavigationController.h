#pragma once

#include "BaseController.h"

namespace gris
{
	namespace muk
	{	
		class SurgeonViewNavigationController : public BaseController
		{
			Q_OBJECT	
	
			signals:
				void initRequested();
				void dummyRunRequested();
				void dummyStopRequested();
				void dummyStepForwardRequested();
				void dummyCalibrateRequested();



			public:
				void initialize();
				void setupConnections();
				void toggleRunStop();
				void stepForward();
				void stepBackwards();
				void calibrate();

			private:
				bool initialized = false;
				bool running = false;
		};
	} 
} 

