#pragma once

#include "BaseController.h"

namespace gris
{
	namespace muk
	{	
		class SurgeonViewSelectionController : public BaseController
		{
			Q_OBJECT	

			public:
				void initialize();
				void setupConnections();

				void enableWidget();
				void autoFillCanals(); 
				void fillOutInformationSinglePath();
				void toggleCtOverlay();
				void obstaclePathAnalysis();
				void fillOutBestPaths();
			


		};
	} 
} 

