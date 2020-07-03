#include "private/muk.pch"
#include "SurgeonViewInput.h"

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
		SurgeonViewInput::SurgeonViewInput(QWidget* parent)
			: QWidget(parent)
		{
			QIcon icRun;
			icRun.addFile("../resources/icons/muk_icons/pending.png", QSize(), QIcon::Normal, QIcon::Off);
			
			//CT
			btnLoadCt = new QToolButton(this);			
			btnLoadCt->setText("\t\t\tLoad CT Data");
			btnLoadCt->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred)); 
			btnLoadCt->setIcon(icRun);
			btnLoadCt->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
			connect(btnLoadCt, SIGNAL(clicked()), this, SLOT(actionLoadCtData())); //&QPushButton::clicked

			//Segmentation
			btnLoadSegmentation = new QToolButton(this);
			btnLoadSegmentation->setText("\t\t\tLoad Segmentation Data");
			btnLoadSegmentation->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred));
			btnLoadSegmentation->setIcon(icRun);
			btnLoadSegmentation->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
			connect(btnLoadSegmentation, SIGNAL(clicked()), this, SLOT(actionLoadSegmentationData()));
			
			//3D Models
			btnLoad3DModels = new QToolButton(this);
			btnLoad3DModels->setText("\t\t\tLoad 3D Objects");
			btnLoad3DModels->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred));
			btnLoad3DModels->setIcon(icRun);
			btnLoad3DModels->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
			connect(btnLoad3DModels, SIGNAL(clicked()), this, SLOT(actionLoad3DModels()));

			//start
			auto* btnStart = new QPushButton("Start", this);
			connect(btnStart, SIGNAL(clicked()), this, SLOT(actionStartButtonClicked()));

			//else
			auto lineSeperator = new QFrame;
			lineSeperator->setFrameShape(QFrame::HLine);
			auto lblEmpty = new QLabel("");

			//define layout			

			auto* mainLayout = new QGridLayout();
			setLayout(mainLayout);
			mainLayout->setAlignment(Qt::AlignTop);

			mainLayout->addWidget(btnLoadCt, 0, 0, 1, 2);
			mainLayout->addWidget(btnLoadSegmentation, 1, 0, 1, 2);
			mainLayout->addWidget(btnLoad3DModels, 2, 0, 1, 2);
			mainLayout->addWidget(lblEmpty, 3, 0, 1, 2);
			mainLayout->addWidget(btnStart, 4, 0, 1, 2);
		//	mainLayout->addWidget(btnLoadScene, 2, 0, 1, 2);
		//	mainLayout->addWidget(btnCreateScene, 3, 0, 1, 2);
			//mainLayout->addWidget(labelScene, 2,0,1,1);
			//mainLayout->addWidget(comboScene, 2,1,1,1);
			
		}


		/**
		*/
		SurgeonViewInput::~SurgeonViewInput()
		{
		}



		void SurgeonViewInput::actionLoadCtData()
		{
			QString qFilename = QFileDialog::getOpenFileName(this, tr("Open CT File"), "", tr("TImage Files (*.mhd *.vtk *.obj)"));
			if (qFilename.isEmpty())
				return;
			emit loadCtDataClicked(qFilename.toLocal8Bit().constData());  //connected to SurgeonViewInputController
		}

		void SurgeonViewInput::actionLoadDefaultSegmentationData()
		{
			emit loadDefaultSegmentationDataClicked();
		}


		void SurgeonViewInput::actionLoadSegmentationData()
		{
			QString qFilename = QFileDialog::getOpenFileName(this, tr("Open Segmentations File"), "", tr("TImage Files (*.mhd *.raw *.nrrd)"));
			if (qFilename.isEmpty())
				return;
			emit loadSegmentationDataClicked(qFilename.toLocal8Bit().constData());
		}


		void SurgeonViewInput::actionStartSegmentation()
		{
			emit startSegmentationClicked();
		}

		void SurgeonViewInput::actionLoad3DModels() 
		{
			QStringList fileNames = QFileDialog::getOpenFileNames(this,
				tr("Open Files"), "", tr("Image Files (*.mhd *.vtk *.obj *.stl)"));
			if (fileNames.isEmpty())
				return;

			for (int i(0); i<fileNames.size(); ++i)
			{
				std::string str(fileNames[i].toLocal8Bit().constData());
				emit load3DModelsClicked(str);
			}
		}

		void SurgeonViewInput::actionStartButtonClicked()
		{
			emit startButtonClicked();
		}

		void SurgeonViewInput::markCtAsEntered() 
		{
			QIcon icOk;
			icOk.addFile("../resources/icons/muk_icons/Ok.png", QSize(), QIcon::Normal, QIcon::Off);
			btnLoadCt->setIcon(icOk);
		}		
		
		void SurgeonViewInput::markSegmentationAsEntered()
		{
			QIcon icOk;
			icOk.addFile("../resources/icons/muk_icons/Ok.png", QSize(), QIcon::Normal, QIcon::Off);
			btnLoadSegmentation->setIcon(icOk);
		}		
		
		void SurgeonViewInput::mark3DModelsAsEntered()
		{
			QIcon icOk;
			icOk.addFile("../resources/icons/muk_icons/Ok.png", QSize(), QIcon::Normal, QIcon::Off);
			btnLoad3DModels->setIcon(icOk);
		}


	} // namespace muk
} // namespace gris
