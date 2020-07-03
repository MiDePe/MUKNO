#include "private/muk.pch"
#include "SurgeonViewPlanning.h"

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
		SurgeonViewPlanning::SurgeonViewPlanning(QWidget* parent)
			: QWidget(parent)
		{
			// Generel items
			QIcon icToDo;
			icToDo.addFile("../resources/icons/muk_icons/pending.png", QSize(), QIcon::Normal, QIcon::Off);
			QPixmap iconToDo = icToDo.pixmap(QSize(64, 64));
		
			// Setup Button
			btnSetupView = new QPushButton("Setup View", this); 
			connect(btnSetupView, SIGNAL(clicked()), this, SLOT(actionSetupView()));

			//Start Region
			labelIconStart = new QLabel();
			labelIconStart->setPixmap(iconToDo);

			QLabel* labelTitleStart = new QLabel("Add Start Region");

		//	QPushButton* btnStartSingle = new QPushButton("Single Point", this);
		//	connect(btnStartSingle, SIGNAL(clicked()), this, SLOT(actionStartSingle()));

			QPushButton* btnStartMulti = new QPushButton("Multiple Points", this);
			connect(btnStartMulti, SIGNAL(clicked()), this, SLOT(actionStartMulti()));

			boxStartRegion = new QGroupBox();				
			auto* layoutStartRegionCaption = new QHBoxLayout();
			layoutStartRegionCaption->setAlignment(Qt::AlignLeft);
			layoutStartRegionCaption->addWidget(labelIconStart);
			layoutStartRegionCaption->addWidget(labelTitleStart);
			auto* layoutStartRegion = new QVBoxLayout();
			layoutStartRegion->setAlignment(Qt::AlignTop);
			layoutStartRegion->addLayout(layoutStartRegionCaption);
		//	layoutStartRegion->addWidget(btnStartSingle);
			layoutStartRegion->addWidget(btnStartMulti); 
			boxStartRegion->setLayout(layoutStartRegion);

			//Goal Region
			labelIconGoal = new QLabel();
			labelIconGoal->setPixmap(iconToDo);
	
			QLabel* labelTitleGoal = new QLabel("Add Goal Region"); 

	//		QPushButton* btnGoalSingle = new QPushButton("Single Point", this);
	//		connect(btnGoalSingle, SIGNAL(clicked()), this, SLOT(actionGoalSingle()));

			QPushButton* btnGoalMulti = new QPushButton("Multiple Points", this);
			connect(btnGoalMulti, SIGNAL(clicked()), this, SLOT(actionGoalMulti()));

			QLabel* labelEmpty = new QLabel("");

			boxGoalRegion = new QGroupBox();
			//boxGoalRegion->setStyleSheet(createGroupBoxStylesheet(colorYellow, borderSize));	
			auto* layoutGoalRegionCaption = new QHBoxLayout();
			layoutGoalRegionCaption->setAlignment(Qt::AlignLeft);
			layoutGoalRegionCaption->addWidget(labelIconGoal);
			layoutGoalRegionCaption->addWidget(labelTitleGoal);
			auto* layoutGoalRegion = new QVBoxLayout();
			layoutGoalRegion->setAlignment(Qt::AlignTop);
			layoutGoalRegion->addLayout(layoutGoalRegionCaption);
			layoutGoalRegion->addWidget(btnSetupView);
	//		layoutGoalRegion->addWidget(labelEmpty);
	//		layoutGoalRegion->addWidget(btnGoalSingle);
			layoutGoalRegion->addWidget(btnGoalMulti);
			boxGoalRegion->setLayout(layoutGoalRegion);

			//Create Paths

			labelIconPath = new QLabel();
			labelIconPath->setPixmap(iconToDo);
	
			QLabel* labelTitlePath = new QLabel("Create Paths");

			QPushButton* btnCreatePaths = new QPushButton("Create Paths", this);
			connect(btnCreatePaths, SIGNAL(clicked()), this, SLOT(actionCreatePaths()));

			spinPathCount = new QDoubleSpinBox(this);
			spinPathCount->setValue(10);
			spinPathCount->setDecimals(0);
			spinPathCount->setSingleStep(1);
			
			QGroupBox* boxCreatePaths = new QGroupBox();			
			auto* layoutCreatePathsCaption = new QHBoxLayout();
			layoutCreatePathsCaption->setAlignment(Qt::AlignLeft);
			layoutCreatePathsCaption->addWidget(labelIconPath);
			layoutCreatePathsCaption->addWidget(labelTitlePath);
			//boxCreatePaths->setStyleSheet(createGroupBoxStylesheet(colorYellow, borderSize));
			auto* layoutCreatePaths = new QVBoxLayout();
			layoutCreatePaths->setAlignment(Qt::AlignTop);;
			layoutCreatePaths->addLayout(layoutCreatePathsCaption);
			layoutCreatePaths->addWidget(spinPathCount);
			layoutCreatePaths->addWidget(btnCreatePaths);
			boxCreatePaths->setLayout(layoutCreatePaths);

			//InfoSection

			sectionInfoSingle = new QWidget(); 
			QLabel* labelInfoSingle = new QLabel("1) Double click on desired spot.\n\n2) Drag to archieve desired \norientation.\n\n3) Right click to finish selection.");
			auto* infoLayoutSingle = new QVBoxLayout(); 
			infoLayoutSingle->addWidget(labelInfoSingle);
			sectionInfoSingle->setLayout(infoLayoutSingle);
			sectionInfoSingle->setVisible(false);

			QIcon icInfo;
			icInfo.addFile("../resources/icons/muk_icons/Info.png", QSize(), QIcon::Normal, QIcon::Off);
			QPixmap iconInfo = icInfo.pixmap(QSize(64, 64));
			QLabel* labelInfoIcon = new QLabel();
			labelInfoIcon->setPixmap(iconInfo);
		
			QLabel* labelTipp = new QLabel("Tip:");

			sectionInfoMulti = new QWidget(); 
			QLabel* labelInfoMulti = new QLabel("1) Click on the center of \nyour desired region.\n\n2) Confirm by clicking the red \nsquare in the upper right corner.\n\n3) Click and drag to draw the region.\n\n4) Right click and choose, whether \nthe region should mark the start \nor goal region.");
			auto* infoLayoutMulti = new QVBoxLayout();
			infoLayoutMulti->addWidget(labelInfoMulti);
			sectionInfoMulti->setLayout(infoLayoutMulti);
			sectionInfoMulti->setVisible(false);

			boxInfo = new QGroupBox(); 
			auto* layoutBoxInfo = new QVBoxLayout();
			auto* layoutBoxInfoCaption = new QHBoxLayout();
			layoutBoxInfoCaption->setAlignment(Qt::AlignLeft);
			layoutBoxInfoCaption->addWidget(labelInfoIcon);
			layoutBoxInfoCaption->addWidget(labelTipp);
			layoutBoxInfo->setAlignment(Qt::AlignTop);
			layoutBoxInfo->addLayout(layoutBoxInfoCaption);
			layoutBoxInfo->addWidget(sectionInfoSingle);
			layoutBoxInfo->addWidget(sectionInfoMulti);
			boxInfo->setLayout(layoutBoxInfo);
			boxInfo->setVisible(false);

			//define layout
			auto* mainLayout = new QVBoxLayout();
			setLayout(mainLayout);
			mainLayout->setAlignment(Qt::AlignTop);
		//	mainLayout->addWidget(btnSetupView);
			mainLayout->addSpacerItem(new QSpacerItem(40, 20));
			mainLayout->addWidget(boxStartRegion);
			mainLayout->addSpacerItem(new QSpacerItem(40,20));
			mainLayout->addWidget(boxGoalRegion);
			mainLayout->addSpacerItem(new QSpacerItem(40,20));
			mainLayout->addWidget(boxCreatePaths);
			mainLayout->addSpacerItem(new QSpacerItem(40,20));
			mainLayout->addWidget(boxInfo);
		}


		/**
		*/
		SurgeonViewPlanning::~SurgeonViewPlanning()
		{
		}

		QString SurgeonViewPlanning::createGroupBoxStylesheet(std::string color, std::string borderSize) {
			std::string result = "QGroupBox { border: " + borderSize + " solid " + color + ";}";
			return QString::fromStdString(result);
		}

		void SurgeonViewPlanning::markStartRegionAsAdded()
		{
			QIcon icDone;
			icDone.addFile("../resources/icons/muk_icons/OK.png", QSize(), QIcon::Normal, QIcon::Off);
			QPixmap iconDone = icDone.pixmap(QSize(64, 64));

			labelIconStart->setPixmap(iconDone);
		//	boxStartRegion->setStyleSheet(createGroupBoxStylesheet(colorGreen, borderSize));
		}

		void SurgeonViewPlanning::markGoalRegionAsAdded()
		{
			QIcon icDone;
			icDone.addFile("../resources/icons/muk_icons/OK.png", QSize(), QIcon::Normal, QIcon::Off);
			QPixmap iconDone = icDone.pixmap(QSize(64, 64));

			labelIconGoal->setPixmap(iconDone);
		//	boxGoalRegion->setStyleSheet(createGroupBoxStylesheet(colorGreen, borderSize));
		}

		void SurgeonViewPlanning::markPathsAsCreated()
		{
			QIcon icDone;
			icDone.addFile("../resources/icons/muk_icons/OK.png", QSize(), QIcon::Normal, QIcon::Off);
			QPixmap iconDone = icDone.pixmap(QSize(64, 64));
			
			labelIconPath->setPixmap(iconDone);
		//	boxCreatePaths->setStyleSheet(createGroupBoxStylesheet(colorGreen, borderSize));
		}


		void SurgeonViewPlanning::actionSetupView()
		{
			boxInfo->setVisible(false);
			sectionInfoSingle->setVisible(false);
			sectionInfoMulti->setVisible(false);

			if (viewSetup)
			{
				viewSetup = false;
				btnSetupView->setText("Setup View");
				emit resetPlanningViewRequested();
			}
			else
			{
				viewSetup = true;
				btnSetupView->setText("Reset View");
				emit setupPlanningViewRequested();
			}
		}


		void SurgeonViewPlanning::actionStartSingle()
		{
			boxInfo->setVisible(true);
			sectionInfoSingle->setVisible(true);
			sectionInfoMulti->setVisible(false);

			emit planningStartRegionSingleRequested();  //handled by SurgeonViewPlanningController
		}


		void SurgeonViewPlanning::actionStartMulti()
		{
			boxInfo->setVisible(true);
			sectionInfoSingle->setVisible(false);
			sectionInfoMulti->setVisible(true);

			emit planningStartRegionMultiRequested();
		}


		void SurgeonViewPlanning::actionGoalSingle()
		{
			boxInfo->setVisible(true);
			sectionInfoSingle->setVisible(true);
			sectionInfoMulti->setVisible(false);


			emit planningGoalRegionSingleRequested();
		}


		void SurgeonViewPlanning::actionGoalMulti()
		{
			boxInfo->setVisible(true);
			sectionInfoSingle->setVisible(false);
			sectionInfoMulti->setVisible(true);


			emit planningGoalRegionMultiRequested();
		}

		size_t SurgeonViewPlanning::getPathCount()
		{
			return spinPathCount->value();
		}


		void SurgeonViewPlanning::actionCreatePaths()
		{
			boxInfo->setVisible(false);
			sectionInfoSingle->setVisible(false);
			sectionInfoMulti->setVisible(false);

			emit planningCreatePathsRequested();
		}


	} // namespace muk
} // namespace gris
