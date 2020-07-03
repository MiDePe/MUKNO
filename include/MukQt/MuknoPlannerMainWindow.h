#pragma once

#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>


#include "SceneWidget.h"
#include "PropertyWidget.h"

QT_BEGIN_NAMESPACE
class QGridLayout;
class QSplitter;
class QTabWidget;
class QTextEdit;
class QStackedWidget;
QT_END_NAMESPACE

namespace gris
{
  namespace muk
  {
    class MedicalMultiViewWidget;
    class MukQMenuBar;
    class MukQToolBar;
	class ToolbarSurgeonModel;
	class SurgeonView;
	class SurgeonViewInput;
	class SurgeonViewSegmentation;
	class SurgeonViewPlanning;
	class SurgeonViewSelection;
	class SurgeonViewNavigation;
	class SurgeonViewInputController;
    class TabImaging;
    class TabNavigation;
    class TabPlanning;
    class TabSelection;


    /**
    */
    class MUK_QT_API MuknoPlannerMainWindow
    {
      public:
        void MuknoPlannerMainWindow::setupUi(QMainWindow* MainWindow);

        void retranslateUi(QMainWindow* MainWindow);
		void switchTabToSelection();
		void switchViews();
		void svSwitchToInputWidget();
		void svSwitchToSegmentationWidget();
		void svSwitchToPlanningWidget();
		void svSwitchToSelectionWidget();
		void svSwitchToNavigationWidget();
		void startTrail();
		void endTrail();

		void pipelineEnableSegmentation();

		SurgeonViewInput* getInputView();

	 private:
		void switchToSurgeonsView();
		void switchToDeveloperView();


      public:
        enum EnModelTabs
        {
          enImaging,
          enPlanning,
          enSelection,
          enNavigation
        };

		enum EnSurgeonViewTabs
		{
		  enSurgeonInput,
		  enSurgeonSegmentation,
		  enSurgeonPlanning,
		  enSurgeonSelection,
		  enSurgeonNavigation
		};

		enum EnViews
		{
		  enDeveloperView,
		  enSurgeonView
		};


      public:
        enum MUK_QT_API EnWindowType
        {
          enTabImaging = 0,
          enTabPlanning,
          enTabSelection,
          enTabEvaluation, /*unused*/
          enTabNavigation
        };

      public:
		//Developer's View
        MukQMenuBar* mMenuBar;
        MukQToolBar* mToolBar;
        QStatusBar*  mStatusbar;


		QWidget*		mpMainWidget; 
        PropertyWidget* mpPropertyWidget;
        SceneWidget*    mpSceneWidget;
        QTextEdit*      mpTextEditLog;

        MedicalMultiViewWidget* mpMedMultiViewWidget;

        QTabWidget*     mpTabContainer;
        TabImaging*     mpTabImaging;
        TabPlanning*    mpTabPlanning;
        TabSelection*   mpTabSelection;
        TabNavigation*  mpTabNavigation;
		TabImaging*     mpTabSegmentation;

		//Surgeon's View
		ToolbarSurgeonModel*			mToolBarSurgeon;
		QStackedWidget*					mpsWidgetContainer;		
		SurgeonViewInput*				sWidgetInput;
		SurgeonViewSegmentation*		sWidgetSegmentation;
		SurgeonViewPlanning*			sWidgetPlanning;
		SurgeonViewSelection*			sWidgetSelection;
		SurgeonViewNavigation*			sWidgetNavigation;
		
		SurgeonView*					mpSurgeonView;

		EnViews mpCurrentView = enDeveloperView;
    };
  }
}
