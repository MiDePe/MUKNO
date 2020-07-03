#pragma once
#include "SurgeonViewInput.h"
#include "SurgeonViewSegmentation.h"
#include "SurgeonViewPlanning.h"

#include <QtWidgets>

namespace gris
{
		


	namespace muk
	{
		class SurgeonViewInput;
		class SurgeonViewSegmentation;
		class SurgeonViewPlanning;

		/**
		*/
		class MUK_QT_API SurgeonView : public QStackedWidget
		{
			Q_OBJECT

		public:
			SurgeonView(QWidget* parent = nullptr);
			~SurgeonView();

			enum EnWidgets
			{
				enInput,
				enSegmentation,
				enPlanning
			};

			void setupConnections();
			void switchToWidget(EnWidgets widget);
			SurgeonViewInput getInputView();

		signals:



		public:
			SurgeonViewInput*			widgetInput;
			SurgeonViewSegmentation*	widgetSegmentation;
			SurgeonViewPlanning*		widgetPlanning;
		};


	}
}

