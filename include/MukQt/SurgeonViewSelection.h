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
		class MUK_QT_API SurgeonViewSelection : public QWidget
		{
			Q_OBJECT


		public:
			SurgeonViewSelection(QWidget* parent = nullptr);
			~SurgeonViewSelection();


		private slots:
			void actionShowAllPaths();
			void actionShowPath();
			void actionDisplayPathProperties(int index);
			void actionAutofill();
			void actionToggleCtOverlay(int state);
			void actionShowObstacleDistances();
			void actionFillOut();
			
		public:
			int activePath = 0;
			int noPaths = 10;
			QComboBox* comboPaths; 
			QTableWidget* tableBestPaths; 
			QTextEdit* txtSinglePathDetails;

			void fillOutShortestPath(int pathID, double value);
			void fillOutLargestDistance(int pathID, double value);
			void fillOutStraighestPath(int pathID, double value);
			void fillOutSmallestGoalAngle(int pathID, double value);
			void fillOutSinglePathDetails(std::string txt);

	

			enum enBestPathProperties
			{
				enStraightestPath,
				enSmallestGoalAngle,
				enShortestPath,
				enLargestDistance
			};

			
		signals:		
			//void setupPlanningViewRequested(); 
			void autofillCanalsRequested();
			void toggleCtOverlayRequested();
			void obstaclePathAnalysisRequested();
			void displayPathPropertiesRequested();
			void showOnlyCurrentPathRequested();
			void showAllPathsRequested();
			void fillOutRequested();
		



		}; //class
	} //namespace muk
} //namespace gris

