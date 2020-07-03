#pragma once

#include "BaseController.h"

namespace gris
{
	namespace muk
	{	
		class SurgeonViewPlanningController : public BaseController
		{
			Q_OBJECT

			signals:

		//	private slots:				
	

			public:
				void initialize();
				void setupConnections();
				void setupViewTemporalBone(); 
				void resetViewTemporalBone();
				void addStartRegionSingle();
				void addStartRegionMulti();
				void addGoalRegionSingle();
				void addGoalRegionMulti();
				void createPaths();
				void markStartRegionAsAdded();
				void markGoalRegionAsAdded(); 
				void markPathsAsCreated();
				void initSurgeonSelectionController();
				void checkForStartRegions();
				void checkForGoalRegions();

			private:
				bool startRegionAdded = false;
				bool goalRegionAdded = false;
				std::string namePathCollection; 

		};
	} 
} 

