#include "private/muk.pch"
#include "SurgeonViewProperties.h"

#include "muk_qt_tools.h"

#include <QtWidgets>

#include <boost/format.hpp>


namespace gris
{
namespace muk
{
  /**
  */
	SurgeonViewProperties::SurgeonViewProperties(QWidget *parent)
    : QWidget(parent)
  {
		//GUI objects
		QGroupBox* groupBox = new QGroupBox("Properties");

		QLabel* lblVisible = new QLabel("Visible");

		QCheckBox* chbVisible = new QCheckBox(this);
		chbVisible->setChecked(true);

		QSlider* sldOpacity = new QSlider(this);
		sldOpacity->setSingleStep(1);
		sldOpacity->setPageStep(1);
		sldOpacity->setOrientation(Qt::Orientation::Horizontal);

		QLabel* lblOpacity = new QLabel("Opacity");


		//define layout
		auto* groupBoxLayout = new QGridLayout();
		groupBoxLayout->addWidget(lblVisible, 0, 0);
		groupBoxLayout->addWidget(chbVisible, 0, 1);
		groupBoxLayout->addWidget(lblOpacity, 1, 0);
		groupBoxLayout->addWidget(sldOpacity, 1, 1);
		groupBox->setLayout(groupBoxLayout);
		auto* mainLayout = new QGridLayout();
		mainLayout->addWidget(groupBox);
		setLayout(mainLayout);
  }

  /**
  */
  SurgeonViewProperties::~SurgeonViewProperties()
  {
  }


}
}