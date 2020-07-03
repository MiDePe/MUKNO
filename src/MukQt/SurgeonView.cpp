#include "private/muk.pch"
#include "SurgeonView.h"

#include <QtWidgets>


namespace gris
{
	namespace muk
	{
		/**
		*/
		SurgeonView::SurgeonView(QWidget* parent)
			: QStackedWidget(parent)
		{
			//create widgets
			widgetInput			= new SurgeonViewInput(this);  //this or parent
			widgetSegmentation	= new SurgeonViewSegmentation(this);
			widgetPlanning		= new SurgeonViewPlanning(this);

			addWidget(widgetInput);
			addWidget(widgetSegmentation);
			addWidget(widgetPlanning);	
		}


		/**
		*/
		SurgeonView::~SurgeonView()
		{
		}

		SurgeonViewInput SurgeonView::getInputView()
		{
			return widgetInput;
		}


		/** \brief setup all (qt) connections
		*/
		void SurgeonView::setupConnections()
		{
			
		}

		void SurgeonView::switchToWidget(EnWidgets widget)
		{
			this->setCurrentIndex(widget);
		}





	} // namespace muk
} // namespace gris
