#pragma once
#include "MukObstacle.h"
#include "VisObstacle.h"
#include "BaseController.h"

namespace gris
{
	namespace muk
	{
		/**
		*/
		class SurgeonViewSegmentationController : public BaseController
		{
			Q_OBJECT

		public:
			void setupConnections();
			void loadObstacles();
			void setObstaclesVisible(QString obstacleName, bool visible);
			void setObstaclesOpacity(QString obstacleName, double opacity);
			void focusOnObstacle(QString obstacleName);

		private:
		};
	}
}
