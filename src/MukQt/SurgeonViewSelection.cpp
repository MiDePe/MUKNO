#include "private/muk.pch"
#include "SurgeonViewSelection.h"

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
		SurgeonViewSelection::SurgeonViewSelection(QWidget* parent)
			: QWidget(parent)
		{
			/*************************** Best paths ********************************/

			//// Table: Best paths
			tableBestPaths = new QTableWidget(4, 3, this);
//			tableBestPaths->verticalHeader()->hide();

			//size
			tableBestPaths->setColumnWidth(0, 180);
			tableBestPaths->setColumnWidth(1, 50);
			tableBestPaths->setColumnWidth(2, 150);
			tableBestPaths->setFixedHeight(260);
			tableBestPaths->setFixedWidth(340);

			//Caption
			QStringList labels;
			labels << tr("Property") << tr("Path") << tr("Value");
			tableBestPaths->setHorizontalHeaderLabels(labels);


			// items
			QTableWidgetItem* item1 = new QTableWidgetItem();
			item1->setText("Straightest path");
			tableBestPaths->setItem(enStraightestPath, 0, item1);
			QTableWidgetItem* item2 = new QTableWidgetItem();
			item2->setText("Smallest goal angle:");
			tableBestPaths->setItem(enSmallestGoalAngle, 0, item2);
			QTableWidgetItem* item3 = new QTableWidgetItem();
			item3->setText("Shortest path:");
			tableBestPaths->setItem(enShortestPath, 0, item3);
			QTableWidgetItem* item4 = new QTableWidgetItem();
			item4->setText("Largest minimum distance:");
			tableBestPaths->setItem(enLargestDistance, 0, item4);


			QPushButton* btnShowAllPaths = new QPushButton("Show all paths", this);
			connect(btnShowAllPaths, SIGNAL(clicked()), this, SLOT(actionShowAllPaths()));
			

			QGroupBox* boxBestPath = new QGroupBox("Overview: Best Paths");
			auto* layoutBestPath = new QVBoxLayout();
			layoutBestPath->setAlignment(Qt::AlignTop);
			boxBestPath->setLayout(layoutBestPath);
			layoutBestPath->addWidget(tableBestPaths);
			layoutBestPath->addWidget(btnShowAllPaths);



			/*************************** Path Properties ********************************/
			
			///////////// Combobox and Button

			comboPaths = new QComboBox();
			for (int i = 0; i < noPaths; i++)
			{
				QString pathName = QString("path ") + QString::number(i);
				comboPaths->addItem(pathName);
			}
			comboPaths->setCurrentIndex(0);
			connect(comboPaths, SIGNAL(currentIndexChanged(int)), this, SLOT(actionDisplayPathProperties(int)));

			QPushButton* btnShowPath = new QPushButton("Show path", this);
			connect(btnShowPath, SIGNAL(clicked()), this, SLOT(actionShowPath()));

			txtSinglePathDetails = new QTextEdit(this);
			QFontMetrics font(txtSinglePathDetails->font());
			int rowHeight = font.lineSpacing();
			txtSinglePathDetails->setFixedHeight(5*rowHeight + 30);
			txtSinglePathDetails->setFixedWidth(340);

			QPushButton* btnShowObstacleDistances = new QPushButton("Show Obstacle Distances", this);
			connect(btnShowObstacleDistances, SIGNAL(clicked()), this, SLOT(actionShowObstacleDistances()));

			auto* layoutSinglePath = new QGridLayout();
			layoutSinglePath->setAlignment(Qt::AlignLeft);
			layoutSinglePath->addWidget(comboPaths, 0,0);
			layoutSinglePath->addWidget(btnShowPath, 0,1);
			layoutSinglePath->addWidget(txtSinglePathDetails, 1, 0, 1, 2);
			layoutSinglePath->addWidget(btnShowObstacleDistances, 2,0,1,2);
			

			///////////// GroupBox "Properties"
			//// Table: Properties
	/*		QTableWidget* tableProperties = new QTableWidget(4, 2, this);
			tableProperties->horizontalHeader()->hide();
			tableProperties->verticalHeader()->hide();
			//tableProperties->setShowGrid(false);
			tableProperties->setFixedHeight(200);
			tableProperties->setFixedWidth(340);


			// items
			QTableWidgetItem* itemProp1= new QTableWidgetItem();
			itemProp1->setText("minimum distance:");
			tableProperties->setItem(0, 0, itemProp1);
			QTableWidgetItem* itemProp2 = new QTableWidgetItem();
			itemProp2->setText("sum of curvature:");
			tableProperties->setItem(1, 0, itemProp2);
			QTableWidgetItem* itemProp3 = new QTableWidgetItem();
			itemProp3->setText("angle differences:");
			tableProperties->setItem(2, 0, itemProp3);
			QTableWidgetItem* itemProp4 = new QTableWidgetItem();
			itemProp4->setText("length:");
			tableProperties->setItem(3, 0, itemProp4);*/

			//////TABLE
	/*		QTableWidget* tableObstacles = new QTableWidget(8, 2, this);
			QStringList labelsObst;
			labelsObst << tr("Obstacle") << tr("Distance");
			tableObstacles->setHorizontalHeaderLabels(labelsObst);
			tableObstacles->verticalHeader()->hide();
			//tableProperties->setShowGrid(false);
			tableObstacles->setFixedHeight(345);
			tableObstacles->setFixedWidth(340);


			// items
			QTableWidgetItem* itemObst1 = new QTableWidgetItem();
			itemObst1->setText("Brain:");
			tableObstacles->setItem(0, 0, itemObst1);
			QTableWidgetItem* itemObst2 = new QTableWidgetItem();
			itemObst2->setText("Chorda Tympani:");
			tableObstacles->setItem(1, 0, itemObst2);
			QTableWidgetItem* itemObst3 = new QTableWidgetItem();
			itemObst3->setText("Cochlea:");
			tableObstacles->setItem(2, 0, itemObst3);
			QTableWidgetItem* itemObst4 = new QTableWidgetItem();
			itemObst4->setText("External Auditory Canal:");
			tableObstacles->setItem(3, 0, itemObst4);
			QTableWidgetItem* itemObst5 = new QTableWidgetItem();
			itemObst5->setText("Internal Auditory Canal:");
			tableObstacles->setItem(5, 0, itemObst5);
			QTableWidgetItem* itemObst6 = new QTableWidgetItem();
			itemObst6->setText("Internal Carodit Atery:");
			tableObstacles->setItem(6, 0, itemObst6);
			QTableWidgetItem* itemObst7 = new QTableWidgetItem();
			itemObst7->setText("Jugular Vein:");
			tableObstacles->setItem(7, 0, itemObst7);
			QTableWidgetItem* itemObst8 = new QTableWidgetItem();
			itemObst8->setText("Facial Nerve:");
			tableObstacles->setItem(4, 0, itemObst8);
			tableObstacles->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
			tableObstacles->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);*/

		//	QGroupBox* boxProperties = new QGroupBox("Properties");
		//	auto* layoutProperties = new QVBoxLayout();
		//	layoutProperties->setAlignment(Qt::AlignTop);
		//	boxProperties->setLayout(layoutProperties);
		//	layoutProperties->addWidget(tableProperties);
		//	layoutProperties->addWidget(tableObstacles);
		//	layoutProperties->addWidget(btnShowObstacleDistances);

			///////////// GroupBox "CT Overlay
			QLabel* lblVisible = new QLabel("Visible:");

			QCheckBox* checkboxVisible = new QCheckBox();
			connect(checkboxVisible, SIGNAL(stateChanged(int)), this, SLOT(actionToggleCtOverlay(int)));

			auto* layoutHorizontalVisible = new QHBoxLayout();
			layoutHorizontalVisible->setAlignment(Qt::AlignLeft);
			layoutHorizontalVisible->addWidget(lblVisible);
			layoutHorizontalVisible->addWidget(checkboxVisible);


			QLabel* lblPosition = new QLabel("Position:");

			QSlider* sliderPosition = new QSlider(this);
			//sliderPosition->setValue(obstOpacity);
			sliderPosition->setSingleStep(1);
			sliderPosition->setPageStep(5);
			sliderPosition->setMinimum(0);
			sliderPosition->setMaximumHeight(100);
			sliderPosition->setOrientation(Qt::Orientation::Horizontal);
		//	sliderPosition->setObjectName(obstName);
			connect(sliderPosition, SIGNAL(valueChanged(int)), this, SLOT(setCTOverlayPosition(int)));

			auto* layoutHorizontalPosition = new QHBoxLayout();
			layoutHorizontalPosition->setAlignment(Qt::AlignLeft);
			layoutHorizontalPosition->addWidget(lblPosition);
			layoutHorizontalPosition->addWidget(sliderPosition);

			QGroupBox* boxCTOverlay = new QGroupBox("CT Overlay");
			auto* layoutCTOverlay = new QVBoxLayout();
			layoutCTOverlay->setAlignment(Qt::AlignTop);
			boxCTOverlay->setLayout(layoutCTOverlay);
			layoutCTOverlay->addLayout(layoutHorizontalVisible);
			layoutCTOverlay->addLayout(layoutHorizontalPosition); 

			QGroupBox* boxPathProperties = new QGroupBox("Path Properties");
			auto* layoutPathProperties = new QVBoxLayout();
			layoutPathProperties->setAlignment(Qt::AlignTop);
			layoutPathProperties->addLayout(layoutSinglePath);
		//	layoutPathProperties->addWidget(boxProperties);
		//	layoutPathProperties->addWidget(boxCTOverlay);
			boxPathProperties->setLayout(layoutPathProperties);
			//layoutPathProperties->addWidget();



			/*************************** define layout ********************************/

			auto* mainLayout = new QVBoxLayout();
			setLayout(mainLayout);
			mainLayout->setAlignment(Qt::AlignTop);
			mainLayout->addWidget(boxBestPath);
			mainLayout->addSpacerItem(new QSpacerItem(40, 20));
			mainLayout->addWidget(boxPathProperties);
			mainLayout->addSpacerItem(new QSpacerItem(40, 20));
//			mainLayout->addWidget(boxSelectPaths);

		}


		/**
		*/
		SurgeonViewSelection::~SurgeonViewSelection()
		{
		}

		void SurgeonViewSelection::actionFillOut()
		{
			emit fillOutRequested();
		}

	
		void SurgeonViewSelection::actionShowAllPaths() 
		{
			emit showAllPathsRequested();
		}

		void SurgeonViewSelection::actionShowPath()
		{
			emit showOnlyCurrentPathRequested();
		}

		void SurgeonViewSelection::actionDisplayPathProperties(int index)
		{
			LOG_LINE << "Combobox index changed";
			activePath = comboPaths->currentIndex();
			LOG_LINE << "active Path combobox: " << activePath;
			emit displayPathPropertiesRequested();
		}


		void SurgeonViewSelection::actionShowObstacleDistances() 
		{
			emit obstaclePathAnalysisRequested();
		}

		void SurgeonViewSelection::actionAutofill()
		{
			emit autofillCanalsRequested();
		}


		void SurgeonViewSelection::actionToggleCtOverlay(int state)
		{
			emit toggleCtOverlayRequested();
		}


		void SurgeonViewSelection::fillOutSinglePathDetails(std::string txt)
		{
			txtSinglePathDetails->clear();
			txtSinglePathDetails->append(QString::fromStdString(txt));
		}

		void SurgeonViewSelection::fillOutShortestPath(int pathID, double value)
		{
			QTableWidgetItem* itemID = new QTableWidgetItem();
			QTableWidgetItem* itemValue = new QTableWidgetItem();
			itemID->setText(QString::number(pathID));
			itemValue->setText(QString::number(value));
			tableBestPaths->setItem(enShortestPath, 1, itemID);
			tableBestPaths->setItem(enShortestPath, 2, itemValue);
		}

		void SurgeonViewSelection::fillOutLargestDistance(int pathID, double value)
		{
			QTableWidgetItem* itemID = new QTableWidgetItem();
			QTableWidgetItem* itemValue = new QTableWidgetItem();
			itemID->setText(QString::number(pathID));
			itemValue->setText(QString::number(value));
			tableBestPaths->setItem(enLargestDistance, 1, itemID);
			tableBestPaths->setItem(enLargestDistance, 2, itemValue);
		}


		void SurgeonViewSelection::fillOutStraighestPath(int pathID, double value)
		{
			QTableWidgetItem* itemID = new QTableWidgetItem();
			QTableWidgetItem* itemValue = new QTableWidgetItem();
			itemID->setText(QString::number(pathID));
			itemValue->setText(QString::number(value));
			tableBestPaths->setItem(enStraightestPath, 1, itemID);
			tableBestPaths->setItem(enStraightestPath, 2, itemValue);

		}

		void SurgeonViewSelection::fillOutSmallestGoalAngle(int pathID, double value)
		{

			QTableWidgetItem* itemID = new QTableWidgetItem();
			QTableWidgetItem* itemValue = new QTableWidgetItem();
			itemID->setText(QString::number(pathID));
			itemValue->setText(QString::number(value));
			tableBestPaths->setItem(enSmallestGoalAngle, 1, itemID);
			tableBestPaths->setItem(enSmallestGoalAngle, 2, itemValue);
		}


	} // namespace muk
} // namespace gris
