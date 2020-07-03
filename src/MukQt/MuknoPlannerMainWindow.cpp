#include "private/muk.pch"
#include "MuknoPlannerMainWindow.h"

#include "MedicalMultiViewWidget.h"
#include "MukQMenuBar.h"
#include "MukQToolBar.h"
#include "ToolbarSurgeonModel.h"
#include "TabImaging.h"
#include "TabNavigation.h"
#include "TabPlanning.h"
#include "TabSelection.h"
#include "SurgeonView.h"
#include "SurgeonViewInput.h"
#include "SurgeonViewSegmentation.h"
#include "SurgeonViewPlanning.h"
#include "SurgeonViewSelection.h"
#include "SurgeonViewNavigation.h"

#include <qstatusbar.h>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QStackedWidget>
#include <qlayout.h>
#include <qscrollbar.h>
#include <qimagereader.h>

namespace gris
{
namespace muk
{
  /**
  */
  void MuknoPlannerMainWindow::setupUi(QMainWindow* MainWindow)
  {
    QIcon icon;
    icon.addFile("../resources/icons/muk_icons/gris_logo.png", QSize(), QIcon::Normal, QIcon::Off);
    MainWindow->setWindowIcon(icon);
    MainWindow->setObjectName("MainWindow");

	//Above: Menubar, Toolbar
    mMenuBar = new MukQMenuBar(MainWindow);
    mToolBar = new MukQToolBar(MainWindow);
	mToolBarSurgeon = new ToolbarSurgeonModel(MainWindow);
    {
      mToolBar->setupConnections();
	  mToolBarSurgeon->setupConnections();
      MainWindow->setMenuBar(mMenuBar);
	  MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
      MainWindow->addToolBar(Qt::TopToolBarArea, mToolBar);
	  MainWindow->addToolBar(Qt::TopToolBarArea, mToolBarSurgeon);
	  mToolBarSurgeon->hide();
    }

	//Left-hand Widget
	mpMainWidget = new QWidget(MainWindow);

	//WidgetContainer
	mpsWidgetContainer = new QStackedWidget(mpMainWidget);
	
	//Surgeon Widgets
	//mpSurgeonView		= new SurgeonView(mpMainWidget);
	sWidgetInput		= new SurgeonViewInput(mpMainWidget);
	sWidgetSegmentation = new SurgeonViewSegmentation(mpMainWidget);
	sWidgetPlanning		= new SurgeonViewPlanning(mpMainWidget);
	sWidgetSelection	= new SurgeonViewSelection(mpMainWidget);
	sWidgetNavigation	= new SurgeonViewNavigation(mpMainWidget);



	mpsWidgetContainer->addWidget(sWidgetInput);
	mpsWidgetContainer->addWidget(sWidgetSegmentation);
	mpsWidgetContainer->addWidget(sWidgetPlanning);
	mpsWidgetContainer->addWidget(sWidgetSelection);
	mpsWidgetContainer->addWidget(sWidgetNavigation);


	// Developer View
    auto  topLayout = new QGridLayout(mpMainWidget); // horizontal splitterTop with 3 vertical subwidgets/areas
    auto* splitterTop = new QSplitter(mpMainWidget);
    {
      splitterTop->setOrientation(Qt::Horizontal);
    }
    auto* splitterInfo = new QSplitter(splitterTop);
    {
      splitterInfo->setOrientation(Qt::Vertical);
      mpPropertyWidget	= new gris::muk::PropertyWidget(mpMainWidget);
      mpSceneWidget		= new gris::muk::SceneWidget(mpMainWidget);
      mpTextEditLog = new QTextEdit(mpMainWidget);
	  splitterInfo->addWidget(mpsWidgetContainer); 
	  splitterInfo->addWidget(mpPropertyWidget);
      splitterInfo->addWidget(mpSceneWidget);
      splitterInfo->addWidget(mpTextEditLog);

      splitterTop->addWidget(splitterInfo);
    }


	//Middle Widget
    mpMedMultiViewWidget = new gris::muk::MedicalMultiViewWidget(mpMainWidget);
    splitterTop->addWidget(mpMedMultiViewWidget);


	//Right-hand Widget
    mpTabContainer = new QTabWidget(mpMainWidget);
    {
      mpTabContainer->setLayoutDirection(Qt::LeftToRight);
      mpTabContainer->setMovable(false);
      {
        mpTabImaging      = new gris::muk::TabImaging(mpTabContainer);
        mpTabPlanning     = new gris::muk::TabPlanning(mpTabContainer);
        mpTabSelection    = new gris::muk::TabSelection(mpTabContainer);
        mpTabNavigation   = new gris::muk::TabNavigation(mpTabContainer);
        mpTabContainer->insertTab(enImaging, mpTabImaging, QString());
        mpTabContainer->insertTab(enPlanning, mpTabPlanning, QString());
        mpTabContainer->insertTab(enSelection, mpTabSelection, QString());
        mpTabContainer->insertTab(enNavigation, mpTabNavigation, QString());
      }
      splitterTop->addWidget(mpTabContainer);
    }
    topLayout->addWidget(splitterTop, 0, 1, 1, 1);

	//Down
    mStatusbar = new QStatusBar(MainWindow);
    MainWindow->setStatusBar(mStatusbar);

	// Connect
	MainWindow->setCentralWidget(mpMainWidget);
    retranslateUi(MainWindow);
    mpTabContainer->setCurrentIndex(1);
    QMetaObject::connectSlotsByName(MainWindow);


	//setup View
	mpCurrentView = enDeveloperView;
	mpsWidgetContainer->hide();
//	mpSurgeonView->hide();


  } // setupUi

  SurgeonViewInput* MuknoPlannerMainWindow::getInputView()
  {
	  return mpSurgeonView->widgetInput;
  }

  void MuknoPlannerMainWindow::switchTabToSelection()
  {
	  mpTabContainer->setCurrentIndex(enTabSelection);
  }

  void MuknoPlannerMainWindow::startTrail()
  {

  }

  void MuknoPlannerMainWindow::endTrail()
  {

  }

  /**
  */
  void MuknoPlannerMainWindow::retranslateUi(QMainWindow *MainWindow)
  {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mukno Planning Tool", 0));

    mpTextEditLog->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
      "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
      "p, li { white-space: pre-wrap; }\n"
      "</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
      "<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
    mpTabContainer->setTabText(mpTabContainer->indexOf(mpTabImaging), QApplication::translate("MainWindow", "Imaging", 0));
    mpTabContainer->setTabText(mpTabContainer->indexOf(mpTabPlanning), QApplication::translate("MainWindow", "Planning", 0));
    mpTabContainer->setTabText(mpTabContainer->indexOf(mpTabNavigation), QApplication::translate("MainWindow", "Navigation", 0));
    mpTabContainer->setTabText(mpTabContainer->indexOf(mpTabSelection), QApplication::translate("MainWindow", "Selection", 0));
	mpTabPlanning->retranslateUi(MainWindow);
    mpTabNavigation->retranslateUi(MainWindow);
  } // retranslateUi


  void MuknoPlannerMainWindow::switchViews() {
	  switch (mpCurrentView)
	  {
	  case enDeveloperView:
		  switchToSurgeonsView();
		  mpCurrentView = enSurgeonView;
		  break;

	  case enSurgeonView:
		  switchToDeveloperView();
		  mpCurrentView = enDeveloperView;
		  break;
	  }
  }


  void MuknoPlannerMainWindow::switchToSurgeonsView() 
  {
	  //hide
	  mpTabContainer->hide();
	  mpTextEditLog->hide();
	  mpSceneWidget->hide();
	  mToolBar->hide();
	  mpPropertyWidget->hide();

	  //show
	  mpsWidgetContainer->show();
	  mToolBarSurgeon->show();
  }


  void MuknoPlannerMainWindow::switchToDeveloperView() 
  {
	  //hide
	  mpsWidgetContainer->hide();
	  mToolBarSurgeon->hide();

	  //show
	  mpTabContainer->show();
	  mpTextEditLog->show();
	  mpSceneWidget->show();
	  mToolBar->show();
	  if (mpPropertyWidget->isHidden()) mpPropertyWidget->show();
  }


  void MuknoPlannerMainWindow::svSwitchToInputWidget()
  {
	  mpsWidgetContainer->setCurrentIndex(enSurgeonInput);
	 // mpSurgeonView->switchToWidget(SurgeonView::enInput);
	  mpPropertyWidget->hide();
  }


  void MuknoPlannerMainWindow::svSwitchToSegmentationWidget()
  {
	 mpsWidgetContainer->setCurrentIndex(enSurgeonSegmentation);
	 // mpSurgeonView->switchToWidget(SurgeonView::enSegmentation);
  }


  void MuknoPlannerMainWindow::svSwitchToPlanningWidget()
  {
	  mpsWidgetContainer->setCurrentIndex(enSurgeonPlanning);
	  // mpSurgeonView->switchToWidget(SurgeonView::enSegmentation);
  }


  void MuknoPlannerMainWindow::svSwitchToSelectionWidget()
  {
	  mpsWidgetContainer->setCurrentIndex(enSurgeonSelection);
	  // mpSurgeonView->switchToWidget(SurgeonView::enSegmentation);
  }


  void MuknoPlannerMainWindow::svSwitchToNavigationWidget()
  {
	  mpsWidgetContainer->setCurrentIndex(enSurgeonNavigation);
	  // mpSurgeonView->switchToWidget(SurgeonView::enSegmentation);
  }

  void MuknoPlannerMainWindow::pipelineEnableSegmentation()  //connected to SurgeonViewInputController-> segmentationStarted 
  {
	  mToolBarSurgeon->pipelineEnableSegmentationAndPlanning();  
	  svSwitchToSegmentationWidget();
  }
}
}