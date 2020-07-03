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
		class MUK_QT_API SurgeonViewPlanning : public QWidget
		{
			Q_OBJECT

		public:
			SurgeonViewPlanning(QWidget* parent = nullptr);
			~SurgeonViewPlanning(); 
			void markStartRegionAsAdded();
			void markGoalRegionAsAdded();
			void markPathsAsCreated();
			size_t getPathCount();

		private slots:
			void actionSetupView();
			void actionStartSingle();
			void actionStartMulti();
			void actionGoalSingle();
			void actionGoalMulti();
			void actionCreatePaths();


			
		signals:		
			void setupPlanningViewRequested(); 
			void resetPlanningViewRequested();
			void planningStartRegionSingleRequested();
			void planningStartRegionMultiRequested();
			void planningGoalRegionSingleRequested();
			void planningGoalRegionMultiRequested();
			void planningCreatePathsRequested();

		private:
			QString createGroupBoxStylesheet(std::string color, std::string borderSize);

		private:
			QPushButton*	btnSetupView;
			QWidget*		sectionInfoSingle;
			QWidget*		sectionInfoMulti;
			QGroupBox*		boxStartRegion;
			QGroupBox*		boxGoalRegion; 
			QGroupBox*		boxCreatePaths; 
			QGroupBox*		boxInfo;
			QLabel*			labelIconStart;
			QLabel*			labelIconGoal;
			QLabel*			labelIconPath; 
			QDoubleSpinBox* spinPathCount;
			bool			viewSetup = false;

			//Properties of GroupBoxes
			std::string colorYellow = "#fce205";
			std::string colorGreen  = "#008000";
			std::string borderSize  = "2px";



		}; //class
	} //namespace muk
} //namespace gris

