#include "private/muk.pch"
#include "SurgeonViewSegmentation.h"

#include "SurgeonViewProperties.h"
#include "PropertyWidget.h"

#include <QtWidgets>


namespace gris
{
	namespace muk
	{
		/**
		*/
		SurgeonViewSegmentation::SurgeonViewSegmentation(QWidget* parent)
			: QWidget(parent)
		{
		}


		void SurgeonViewSegmentation::loadObstacles(std::vector<std::shared_ptr<MukObstacle>> obstacles, std::vector<std::shared_ptr<VisObstacle>> visObstacles)
		{
			//init layouts
			mpPropertiesStacked = new QStackedWidget();
			auto* buttonLayout = new QVBoxLayout();
			buttonLayout->setAlignment(Qt::AlignTop);

			auto* mainLayout = new QVBoxLayout();
			mainLayout->setAlignment(Qt::AlignTop);
			mainLayout->addLayout(buttonLayout);
			mainLayout->addWidget(mpPropertiesStacked);
			setLayout(mainLayout);


			for (int i = 0; i < sizeof(obstacles) / 2; ++i)
			{
				//extract obstacle information
				std::shared_ptr<MukObstacle> obst = obstacles.at(i);
				std::shared_ptr<VisObstacle> visObst = visObstacles.at(i);
				QString		obstName = QString::fromStdString(obst->getName());
				int			obstOpacity = (int)(visObst->getOpacity() * 100);
				bool		obstVisible = visObst->getVisibility();
				Vec3d obstColor = visObst->getDefaultColor();
				//Vec3d		obstColorSuper = 255 * visObst->getDefaultColor();  // <---
				std::string obstHexColor = hexColorFromVector3d(255* obstColor);

				//obstacle buttons
				auto* btnObstacle = new QToolButton(this);
				btnObstacle->setText(obstName);
				btnObstacle->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred));
				btnObstacle->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
			//	btnObstacle->setStyleSheet(QString::fromStdString("background-color: " + obstHexColor));
				btnObstacle->setObjectName(QString::number(i));
				connect(btnObstacle, SIGNAL(clicked()), this, SLOT(showPropertyWidget()));

				//////
				QPixmap pix(64, 64);
				pix.fill(QColor(obstColor.x() * 255, obstColor.y()*255, obstColor.z()*255));
				QIcon iconObst(pix);
				btnObstacle->setIcon(iconObst);
				//////



				//Property Widget
				//Checkbox: Visibility
				QCheckBox* chbVisible = new QCheckBox(this);
				chbVisible->setChecked(obstVisible);
				chbVisible->setObjectName(obstName);
				connect(chbVisible, SIGNAL(stateChanged(int)), this, SLOT(setObstacleVisible(int)));

				//Slider: Opacity
				QSlider* sliderOpacity = new QSlider(this);
				sliderOpacity->setValue(obstOpacity);
				sliderOpacity->setSingleStep(1);
				sliderOpacity->setPageStep(5);
				sliderOpacity->setMinimum(0);
				sliderOpacity->setMaximum(100);
				sliderOpacity->setOrientation(Qt::Orientation::Horizontal);
				sliderOpacity->setObjectName(obstName);
				connect(sliderOpacity, SIGNAL(valueChanged(int)), this, SLOT(setObstacleOpacity(int)));

				//Button: focus
				QPushButton* btnCenter = new QPushButton(this);
				btnCenter->setText("focus");
				btnCenter->setObjectName(obstName);
				connect(btnCenter, SIGNAL(clicked()), this, SLOT(focusOnObstacle()));

				//Labels
				QLabel* lblVisible = new QLabel("Visible");
				QLabel* lblOpacity = new QLabel("Opacity");
				QLabel* lblEmpty = new QLabel("");

				//Groupbox
				QGroupBox* groupBox = new QGroupBox();
				groupBox->setTitle(QString::fromStdString("Properties: ").append(obstName));
				groupBox->setStyleSheet(QString::fromStdString("QGroupBox {  border: 5px solid " + obstHexColor + ";}"));
				auto* groupBoxLayout = new QGridLayout();
				groupBoxLayout->addWidget(lblEmpty, 0, 0);
				groupBoxLayout->addWidget(lblVisible, 1, 0);
				groupBoxLayout->addWidget(chbVisible, 1, 1);
				groupBoxLayout->addWidget(lblOpacity, 2, 0);
				groupBoxLayout->addWidget(sliderOpacity, 2, 1);
				groupBoxLayout->addWidget(btnCenter, 3, 0, 3, 3);
				groupBox->setLayout(groupBoxLayout);

				//layout
				buttonLayout->addWidget(btnObstacle);
				QWidget* propertyWidget = new QWidget();
				auto* propertyLayout = new QVBoxLayout();
				propertyLayout->setAlignment(Qt::AlignTop);
				propertyWidget->setLayout(propertyLayout);
				propertyLayout->addWidget(groupBox);
				mpPropertiesStacked->addWidget(propertyWidget);

			} //for		

		}

		/**
		* Takes a 3d vector with values between 0 and 255. Returns hex color.
		* ie.: (170, 0, 255) => #aa00ff
		*/
		std::string SurgeonViewSegmentation::hexColorFromVector3d(Vec3d color)
		{
			std::stringstream sstream;
			sstream << '#';
			sstream << std::setfill('0') << std::setw(2) << std::hex << (int)color.x();
			sstream << std::setfill('0') << std::setw(2) << std::hex << (int)color.y();
			sstream << std::setfill('0') << std::setw(2) << std::hex << (int)color.z();
			return sstream.str();
		}


		/**
		* Connected to every btnObstacle. When clicked, shows properties for respective obstacle.
		*/
		void SurgeonViewSegmentation::showPropertyWidget()
		{
			std::string index = sender()->objectName().toStdString();
			int i = std::stoi(index);
			mpPropertiesStacked->setCurrentIndex(i);
		}

		void SurgeonViewSegmentation::focusOnObstacle()
		{
			QString obstacleName = sender()->objectName();
			emit focusOnObstacleRequested(obstacleName); //connected to SurgeonViewSegmentationController
		}

		/**
		* Connected to checkbox. Switches visibility of obstacle.
		*/
		void SurgeonViewSegmentation::setObstacleVisible(int visible)
		{
			QString obstacleName = sender()->objectName();
			emit obstacleVisibilityRequested(obstacleName, visible); //connected to SurgeonViewSegmentationController
		}

		/**
		* Input opacity is the current slider position (between 0 and 100).
		* Will be translated into VisObstacle opacity (between 0 and 1).
		* Connected to Slider.
		*/
		void SurgeonViewSegmentation::setObstacleOpacity(int opacity)
		{
			QString obstacleName = sender()->objectName();
			emit obstacleOpacityRequested(obstacleName, opacity / (double)100); //connected to SurgeonViewSegmentationController
		}


		/**
		* For testing purposes only.
		*/
		void SurgeonViewSegmentation::loadDefaultSetup(QWidget* parent)
		{
			// objects
			auto* btn1 = new QPushButton("1: internal carotid artery", this);
			auto* btn2 = new QPushButton("2: jugular vein", this);
			auto* btn3 = new QPushButton("3: facial nerve", this);
			auto* btn4 = new QPushButton("4: cochlea", this);
			auto* btn5 = new QPushButton("5: chorda tympani", this);
			auto* btn6 = new QPushButton("6: ossicles", this);
			auto* btn7 = new QPushButton("7: semicircular cannels	", this);
			auto* btn8 = new QPushButton("8: internal acoustic meatus", this);
			auto* btn9 = new QPushButton("9: vestibular aqueduct", this);
			auto* btn10 = new QPushButton("10: external auditory canal", this);

			//colors
			btn1->setStyleSheet("background-color: red");
			btn2->setStyleSheet("background-color: blue");
			btn3->setStyleSheet("background-color: #FFFF80");
			btn4->setStyleSheet("background-color: #00FF00");
			btn5->setStyleSheet("background-color: cyan");
			btn6->setStyleSheet("background-color: #AA00FF");
			btn7->setStyleSheet("background-color: #FFAD00");
			btn8->setStyleSheet("background-color: magenta");
			btn9->setStyleSheet("background-color: gray");
			btn10->setStyleSheet("background-color: #AAAA7F");

			//define layout
			auto* mainLayout = new QVBoxLayout();
			mainLayout->setAlignment(Qt::AlignTop);
			setLayout(mainLayout);

			mainLayout->addWidget(btn1);
			mainLayout->addWidget(btn2);
			mainLayout->addWidget(btn3);
			mainLayout->addWidget(btn4);
			mainLayout->addWidget(btn5);
			mainLayout->addWidget(btn6);
			mainLayout->addWidget(btn7);
			mainLayout->addWidget(btn8);
			mainLayout->addWidget(btn9);
			mainLayout->addWidget(btn10);
		}

		/**
		*/
		SurgeonViewSegmentation::~SurgeonViewSegmentation()
		{
		}

	} // namespace muk
} // namespace gris
