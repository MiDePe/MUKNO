#include "private/muk.pch"
#include "ToolbarSurgeonModel.h"

#include "MukCommon/MukException.h"

#include <QAction>
#include <QFileDialog>
#include <qsignalmapper.h>

#include <functional>


namespace gris
{
	namespace muk
	{
		/**
		*/
		ToolbarSurgeonModel::ToolbarSurgeonModel(QWidget* parent)
			: QToolBar(parent)
		{
			//Properties
			setObjectName(QStringLiteral("toolbar"));;
			setMovable(false);
			setFloatable(false);
			setToolButtonStyle(Qt::ToolButtonTextUnderIcon);  //ToolButtonTextBesideIcon


			for (int i(0); i< EnActionsSize; ++i)
			{
				addAction(new QAction(this));
			}

			auto* nextAction = actions()[enSInput];
			{
				nextAction->setObjectName("actionShowInput");
				nextAction->setText("Input >");
				nextAction->setToolTip("");  //TODO ToolTips, Shortcuts
				nextAction->setShortcut(QKeySequence("Strg+N"));
			    icInactiveInput.addFile("../resources/icons/muk_icons/green_1.png", QSize(), QIcon::Normal, QIcon::Off);
				nextAction->setIcon(icInactiveInput);
			}
			nextAction = actions()[enSSegmentation];
			{
				nextAction->setObjectName("actionShowSegmentation");
				nextAction->setText("Segmentation >");
				nextAction->setToolTip("");
				icInactiveSegmentation.addFile("../resources/icons/muk_icons/gray_2.png", QSize(), QIcon::Normal, QIcon::Off);
				nextAction->setIcon(icInactiveSegmentation);
			}
			nextAction = actions()[enSPlanning];
			{
				nextAction->setObjectName("actionShowPlanning");
				nextAction->setText("Planning >");
				nextAction->setToolTip("");
				icInactivePlanning.addFile("../resources/icons/muk_icons/gray_3.png", QSize(), QIcon::Normal, QIcon::Off);
				nextAction->setIcon(icInactivePlanning);
			}
			nextAction = actions()[enSSelection];
			{
				nextAction->setObjectName("actionShowSelection");
				nextAction->setText("Selection >");
				nextAction->setToolTip("");
				icInactiveSelection.addFile("../resources/icons/muk_icons/gray_4.png", QSize(), QIcon::Normal, QIcon::Off);
				nextAction->setIcon(icInactiveSelection);
			}
			nextAction = actions()[enSNavigation];
			{
				nextAction->setObjectName("actionShowNavigation");
				nextAction->setText("Navigation");
				nextAction->setToolTip("");
				icInactiveNavigation.addFile("../resources/icons/muk_icons/gray_5.png", QSize(), QIcon::Normal, QIcon::Off);
				nextAction->setIcon(icInactiveNavigation);
			}		
			nextAction = actions()[enEmpty];
			{
				nextAction->setObjectName("actionEmpty");
				nextAction->setText("");
				nextAction->setToolTip("");
			}

			nextAction = actions()[enSTrail];
			{
				nextAction->setObjectName("actionStartTrail");
				nextAction->setText("START TRAIL");
				nextAction->setToolTip("");
				icTrail.addFile("../resources/icons/muk_icons/trail.png", QSize(), QIcon::Normal, QIcon::Off);
				nextAction->setIcon(icTrail);
			}



			nextAction = actions()[enSwitchView];
			{
				nextAction->setObjectName("actionSwitchToDeveloperView");
				nextAction->setText("Switch View");
				nextAction->setToolTip("Switches into Developer view.");
				QIcon icon;
				icon.addFile("../resources/icons/muk_icons/switch.png", QSize(), QIcon::Normal, QIcon::Off);
				nextAction->setIcon(icon);
			}


			actionShowInput();
		}

		/**
		*/
		ToolbarSurgeonModel::~ToolbarSurgeonModel()
		{
		}

		void ToolbarSurgeonModel::pipelineEnableSegmentationAndPlanning()
		{
			//change icons
			auto* actionSegmentation = actions()[enSSegmentation];		
			icInactiveSegmentation.addFile("../resources/icons/muk_icons/green_2.png", QSize(), QIcon::Normal, QIcon::Off);
			actionSegmentation->setIcon(icInactiveSegmentation);

			auto* actionPlanning = actions()[enSPlanning];		
			icInactivePlanning.addFile("../resources/icons/muk_icons/green_3.png", QSize(), QIcon::Normal, QIcon::Off);
			actionPlanning->setIcon(icInactivePlanning);
		
			//enable signals
			connect(actions()[enSSegmentation], &QAction::triggered, this, &ToolbarSurgeonModel::actionShowSegmentation);
			connect(actions()[enSPlanning], &QAction::triggered, this, &ToolbarSurgeonModel::actionShowPlanning);

			actionShowSegmentation();
		}

		void ToolbarSurgeonModel::pipelineEnableSelection()
		{
			//icon
			auto* actionSelection = actions()[enSSelection];
			icInactiveSelection.addFile("../resources/icons/muk_icons/green_4.png", QSize(), QIcon::Normal, QIcon::Off);
			actionSelection->setIcon(icInactiveSelection);

			//connect
			connect(actions()[enSSelection], &QAction::triggered, this, &ToolbarSurgeonModel::actionShowSelection);

			actionShowSelection();
		}

		void ToolbarSurgeonModel::pipelineEnableNavigation()
		{
			//icon
			auto* actionNavigation = actions()[enSNavigation];
			icInactiveNavigation.addFile("../resources/icons/muk_icons/green_5.png", QSize(), QIcon::Normal, QIcon::Off);
			actionNavigation->setIcon(icInactiveNavigation);

			//connect
			connect(actions()[enSNavigation], &QAction::triggered, this, &ToolbarSurgeonModel::actionShowNavigation);
		}


		/** connects click-events in GUI to the functions below
		*/
		void ToolbarSurgeonModel::setupConnections()
		{
			connect(actions()[enSInput], &QAction::triggered, this, &ToolbarSurgeonModel::actionShowInput);
			connect(actions()[enSwitchView], &QAction::triggered, this, &ToolbarSurgeonModel::actionSwitchToDeveloperView);
			connect(actions()[enSTrail], &QAction::triggered, this, &ToolbarSurgeonModel::actionTrail);
		}


		void ToolbarSurgeonModel::actionTrail()
		{
			if (actions()[enSTrail]->text() == "START TRAIL") 
			{
				emit trailStarted();
				actions()[enSTrail]->setText("END TRAIL");
			}
			else
			{
				emit trailEnded();
				actions()[enSTrail]->setText("START TRAIL");
			}

			
		}

		void ToolbarSurgeonModel::actionShowInput()
		{
			QIcon icActive;
			icActive.addFile("../resources/icons/muk_icons/yellow_1.png", QSize(), QIcon::Normal, QIcon::Off);
			actions()[enSInput]->setIcon(icActive);
			actions()[enSSegmentation]->setIcon(icInactiveSegmentation);
			actions()[enSPlanning]->setIcon(icInactivePlanning);
			actions()[enSSelection]->setIcon(icInactiveSelection);
			actions()[enSNavigation]->setIcon(icInactiveNavigation);
			emit showInputWidget();  //connected to MuknoPlanner::ToolbarController.cpp

		}



		void ToolbarSurgeonModel::actionShowSegmentation()
		{
			QIcon icActive;
			icActive.addFile("../resources/icons/muk_icons/yellow_2.png", QSize(), QIcon::Normal, QIcon::Off);
			actions()[enSInput]->setIcon(icInactiveInput);
			actions()[enSSegmentation]->setIcon(icActive);
			actions()[enSPlanning]->setIcon(icInactivePlanning);
			actions()[enSSelection]->setIcon(icInactiveSelection);
			actions()[enSNavigation]->setIcon(icInactiveNavigation);
			emit showSegmentationWidget();
		}



		void ToolbarSurgeonModel::actionShowPlanning()
		{
			QIcon icActive;
			icActive.addFile("../resources/icons/muk_icons/yellow_3.png", QSize(), QIcon::Normal, QIcon::Off);
			actions()[enSInput]->setIcon(icInactiveInput);
			actions()[enSSegmentation]->setIcon(icInactiveSegmentation);
			actions()[enSPlanning]->setIcon(icActive);
			actions()[enSSelection]->setIcon(icInactiveSelection);
			actions()[enSNavigation]->setIcon(icInactiveNavigation);
			emit showPlanningWidget();
		}


		void ToolbarSurgeonModel::actionShowSelection()
		{
			QIcon icActive;
			icActive.addFile("../resources/icons/muk_icons/yellow_4.png", QSize(), QIcon::Normal, QIcon::Off);
			actions()[enSInput]->setIcon(icInactiveInput);
			actions()[enSSegmentation]->setIcon(icInactiveSegmentation);
			actions()[enSPlanning]->setIcon(icInactivePlanning);
			actions()[enSSelection]->setIcon(icActive);
			actions()[enSNavigation]->setIcon(icInactiveNavigation);
			emit showSelectionWidget();
		}

		/**
		*/
		void ToolbarSurgeonModel::actionShowNavigation()
		{
			QIcon icActive;
			icActive.addFile("../resources/icons/muk_icons/yellow_5.png", QSize(), QIcon::Normal, QIcon::Off);
			actions()[enSInput]->setIcon(icInactiveInput);
			actions()[enSSegmentation]->setIcon(icInactiveSegmentation);
			actions()[enSPlanning]->setIcon(icInactivePlanning);
			actions()[enSSelection]->setIcon(icInactiveSelection);
			actions()[enSNavigation]->setIcon(icActive);
			emit showNavigationWidget();
		}


		void ToolbarSurgeonModel::actionSwitchToDeveloperView()
		{
			emit switchToDeveloperViewClicked();  //connected to MuknoPlanner::ToolbarController
		}

	}
}
