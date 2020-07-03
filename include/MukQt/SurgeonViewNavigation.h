#pragma once
#include "muk_qt_api.h"
#include "AlgConnection.h"
#include "AlgItemHandler.h"

#include <QtWidgets>

namespace gris
{
	namespace muk
	{
		/**
		*/
		class MUK_QT_API SurgeonViewNavigation : public QWidget
		{
			Q_OBJECT

		public:
			SurgeonViewNavigation(QWidget* parent = nullptr);
			~SurgeonViewNavigation();


		private slots:
			void actionToggleRunDummy();
			void actionStepForwardDummy();
			void actionStepBackwardsDummy();
			void actionCalibrateDummy();

		signals:	
			void initRequested();
			void dummyRunRequested();
			void dummyStopRequested();
			void dummyStepForwardRequested();
			void dummyStepBackwardsRequested();
			void dummyCalibrateRequested();

		private:
			QPushButton* btnRunStop;
			bool running; 
			bool firstRun = true;

		}; //class
	} //namespace muk
} //namespace gris

