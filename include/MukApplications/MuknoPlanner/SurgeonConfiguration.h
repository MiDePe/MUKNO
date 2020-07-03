#pragma once

#include <string>

namespace gris
{
	namespace muk
	{
  
		class SurgeonConfiguration
		{
			public:				
				enum EnScenes
				{
					enTemporalBone
				};

				const std::string PATHCOLLECTION_NAME = "userPathCollection";
				const std::string FILEPATH_SCENE_EMPTY = "..\\resources\\emptyScene.mukscene";
				const std::string FILEPATH_SCENE_TEMPORAL_BONE = "C:\\thesis\\build\\x64\\release\\MUKNO2-gris\\RelWithDebInfo\\results\\thesis\\2020-01-21-meeting\\Scenes\\P01-scene.mukscene";
				const std::string FILEPATH_ALGORITHM = "..\\resources\\Alg-LoadGT.alg";
				const std::string FILEPATH_SEGMENTATION = "C:\\thesis\\build\\x64\\release\\MUKNO2-gris\\RelWithDebInfo\\data\\Temporal Bone\\P01\\P01_GroundTruth.mhd";

				const double COLORS[12][3] = { { 0.666667,0.666667,1 },
											   { 0,1,1 },
											   { 0,1,0 },
											   { 0.666667,0.666667,0.498039 },
											   { 1,1,0.5 },
											   { 1,0,1 },
											   { 1,0,0 },
											   { 0,0,1 },
											   { 0.666667,0,1 },
											   { 1,0.68,0 },
											   { 1,0.666667,0.498039 },
											   { 0.5,0.5,0.5 } };


		};

	}
}
