#pragma once
#include "muk_qt_api.h"
#include "MukCommon/MukObstacle.h"
#include "MukVisualization/VisObstacle.h"

#include <QtWidgets>

namespace gris
{
	namespace muk
	{
		/**
		*/
		class MUK_QT_API SurgeonViewSegmentation : public QWidget
		{
			Q_OBJECT

		public:
			SurgeonViewSegmentation(QWidget* parent = nullptr);
			~SurgeonViewSegmentation();

		signals:
			void obstacleVisibilityRequested(QString obstacleName, bool visible);
			void obstacleOpacityRequested(QString obstacleName, double opacity);
			void focusOnObstacleRequested(QString obstacleName);

		private slots:
			void showPropertyWidget();
			void setObstacleVisible(int visible);
			void setObstacleOpacity(int opacity);
			void focusOnObstacle();

		public:
			void loadObstacles(std::vector<std::shared_ptr<MukObstacle>> obstacles, std::vector<std::shared_ptr<VisObstacle>> visObstacles);
		

		private:
			std::string hexColorFromVector3d(Vec3d color);

			void loadDefaultSetup(QWidget* parent);

			QStackedWidget* mpPropertiesStacked;


		};
	}
}

