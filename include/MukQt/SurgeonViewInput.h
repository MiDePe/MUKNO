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
		class MUK_QT_API SurgeonViewInput : public QWidget
		{
			Q_OBJECT

		public:
			SurgeonViewInput(QWidget* parent = nullptr);
			~SurgeonViewInput();


			void markSegmentationAsEntered();
			void markCtAsEntered();
			void mark3DModelsAsEntered();

		signals:
			void loadCtDataClicked(const std::string& filename);
			void loadSegmentationDataClicked(const std::string& filename);
			void loadDefaultSegmentationDataClicked();
			void startSegmentationClicked();
			void load3DModelsClicked(const std::string& filename);
			void startButtonClicked();

		private slots:
			void actionLoadCtData();
			void actionLoadDefaultSegmentationData();
			void actionLoadSegmentationData();
			void actionStartSegmentation();
			void actionLoad3DModels(); 
			void actionStartButtonClicked(); 

		private:
			QToolButton* btnLoadCt;
			QToolButton* btnLoadSegmentation;
			QToolButton* btnLoad3DModels;

		public:
			enum enWidgetInputActions
			{
				enChooseScenario,
				enLoadCT,
				enLoadSegmentation,
				enStartSegmentation
			};


		}; //class
	} //namespace muk
} //namespace gris

