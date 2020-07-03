#pragma once

#include "BaseController.h"

namespace gris
{
	class SurgeonViewInput;

	namespace muk
	{	

		class SurgeonViewInputController : public BaseController
		{
			Q_OBJECT

			signals:
				void segmentationStarted();
				

			public:
				void setupConnections();
				void loadCtData(const std::string& filename);
				void loadSegmentationData(const std::string & filename);
				void loadDefaultSegmentationData();
				void loadSingle3DModel(const std::string & filename);
				void startSegmentation();	
				void prepareWidgetSegmentation();

		private:
			bool ctLoaded = false;
			bool segmentationLoaded = false;
			bool obstacleLoaded = false;


		};
	} 
} 

