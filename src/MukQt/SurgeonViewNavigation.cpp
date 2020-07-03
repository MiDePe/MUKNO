#include "private/muk.pch"
#include "SurgeonViewNavigation.h"

#include <boost/filesystem.hpp>
#include "private/muk.pch"


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

#include <QtWidgets>
#include <QCoreApplication>
#include <QApplication>


namespace gris
{
	namespace muk
	{
		/**
		*/
		SurgeonViewNavigation::SurgeonViewNavigation(QWidget* parent)
			: QWidget(parent)
		{

			auto * btnRunStop = new QToolButton(parent);			
			btnRunStop->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred));
			btnRunStop->setText("Run");
			QIcon icRun;
			icRun.addFile("../resources/icons/muk_icons/Run.png", QSize(), QIcon::Normal, QIcon::Off);
			btnRunStop->setIcon(icRun);
			btnRunStop->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
			connect(btnRunStop, SIGNAL(clicked()), this, SLOT(actionToggleRunDummy())); //	connect(btnRunStop, SIGNAL(clicked()), this, SLOT(actionToggleRunDummy()));
			
			auto * btnStepForward = new QToolButton(parent);
			btnStepForward->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred));
			btnStepForward->setText("Step Forward");
			QIcon icStepForward;
			icStepForward.addFile("../resources/icons/muk_icons/Step_Forward.png", QSize(), QIcon::Normal, QIcon::Off);
			btnStepForward->setIcon(icStepForward);
			btnStepForward->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
			connect(btnStepForward, SIGNAL(clicked()), this, SLOT(actionStepForwardDummy()));

	/*		auto * btnStepBackwards = new QToolButton(parent);
			btnStepBackwards->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred));
			btnStepBackwards->setText("Step Backwards");
			QIcon icStepBackwards;
			icStepBackwards.addFile("../resources/icons/windows/Undo.png", QSize(), QIcon::Normal, QIcon::Off);
			btnStepBackwards->setIcon(icStepBackwards);
			btnStepBackwards->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
			connect(btnStepBackwards, SIGNAL(clicked()), this, SLOT(actionStepForwardDummy()));*/

			auto * btnCalibrate = new QToolButton(parent);
			btnCalibrate->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred));
			btnCalibrate->setText("Calibrate");
			QIcon icCalibrate;
			icCalibrate.addFile("../resources/icons/muk_icons/calibrate.png", QSize(), QIcon::Normal, QIcon::Off);
			btnCalibrate->setIcon(icCalibrate);
			btnCalibrate->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
			connect(btnCalibrate, SIGNAL(clicked()), this, SLOT(actionStepForwardDummy()));
	
			auto* lblEmpty = new QLabel("");	

			////// Box Layout
			auto* mainLayout = new QVBoxLayout();
			setLayout(mainLayout);
			mainLayout->setAlignment(Qt::AlignTop);
			mainLayout->addWidget(btnRunStop);
			mainLayout->addWidget(btnStepForward);
		//	mainLayout->addWidget(btnStepBackwards);
			mainLayout->addWidget(lblEmpty);
			mainLayout->addWidget(btnCalibrate);

			// init dummy
			running = false;
			firstRun = true;
		//	emit initRequested();
		}

		void SurgeonViewNavigation::actionToggleRunDummy()
		{
			if (firstRun) 
			{
				emit initRequested();
				firstRun = false;
			}

			if (running)
			{
				btnRunStop->setText("Run");
				running = false;
				emit dummyStopRequested();
			}
			else
			{
				btnRunStop->setText("Stop");
				running = true;
				emit dummyRunRequested();
			}
		}

		void SurgeonViewNavigation::actionStepForwardDummy()
		{
			emit dummyStepForwardRequested();
		}

		void SurgeonViewNavigation::actionStepBackwardsDummy()
		{
			emit dummyStepBackwardsRequested();
		}
		
		void SurgeonViewNavigation::actionCalibrateDummy()
		{
			emit dummyCalibrateRequested();
		}


		SurgeonViewNavigation::~SurgeonViewNavigation()
		{
		}

		


	} // namespace muk
} // namespace gris
