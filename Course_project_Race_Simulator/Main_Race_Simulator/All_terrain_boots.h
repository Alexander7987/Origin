#pragma once
#include "Class_For_Ground.h"

class All_terrain_boots : public Class_For_Ground
{
public:
	RACE_SIMULATOR_API All_terrain_boots();
	RACE_SIMULATOR_API double total_time(const double distance);
};