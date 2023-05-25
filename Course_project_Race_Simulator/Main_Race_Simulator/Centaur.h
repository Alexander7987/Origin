#pragma once
#include "Class_For_Ground.h"

class Centaur : public Class_For_Ground
{
public:
	RACE_SIMULATOR_API Centaur();
	RACE_SIMULATOR_API double total_time(const double distance);
};