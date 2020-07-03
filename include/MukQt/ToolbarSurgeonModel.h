#pragma once

#include "muk_qt_api.h"

#include <QToolBar>

namespace gris
{
	namespace muk
	{

		class MUK_QT_API ToolbarSurgeonModel : public QToolBar
		{
			Q_OBJECT

		enum EnSurgeonViewToolbarItems
			{
				enSInput,
				enSSegmentation,
				enSPlanning,
				enSSelection,
				enSNavigation,
				enEmpty,
				enSTrail,
				enSwitchView,
				EnActionsSize
			};
		

		public:
			ToolbarSurgeonModel(QWidget *parent = 0);
			~ToolbarSurgeonModel();

			void pipelineEnableSegmentationAndPlanning();
			void pipelineEnableSelection();
			void pipelineEnableNavigation();

		public:
			void setupConnections();
			void setLastSceneDir(const std::string& dir) { mLastSceneDir = dir; };

		signals:
			//connected to MukQt::ToolbarSurgeonController
			void showInputWidget();
			void showSegmentationWidget();
			void showPlanningWidget();
			void showSelectionWidget();
			void showNavigationWidget();
			void switchToDeveloperViewClicked();

			void trailStarted();
			void trailEnded();

			private slots:
			void actionShowInput();
			void actionShowSegmentation();
			void actionShowPlanning();
			void actionShowSelection();
			void actionShowNavigation(); 
			void actionTrail();
			void actionSwitchToDeveloperView();
		private:
			std::string mLastSceneDir;
			QIcon icInactiveInput;
			QIcon icInactiveSegmentation;
			QIcon icInactivePlanning;
			QIcon icInactiveSelection;
			QIcon icInactiveNavigation;
			QIcon icTrail;
		};

	}
}
