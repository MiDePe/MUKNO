#pragma once

#include <map>
#include <string>
#include <array>

const std::map<std::string, std::array<unsigned int,4>> libraries = 
{
  { "MukAlgorithms.dll", {0, 6, 0, 0} },
  { "MukCommon.dll", {0, 6, 0, 0} },
  { "MukImaging.dll", {0, 6, 0, 0} },
  { "MukAppModels.dll", {0, 6, 0, 0} },
  { "MukEvaluation.dll", {0, 6, 0, 0} },
  { "MukQt.dll", {0, 6, 0, 0} },
  { "MukPathPlanning.dll", {0, 6, 0, 0} },
  { "MukVisualization.dll", {0, 6, 0, 0} },
  { "MukNavigation.dll", {0, 6, 0, 0} }
};
