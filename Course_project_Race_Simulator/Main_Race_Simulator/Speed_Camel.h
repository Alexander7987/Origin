#pragma once
#include "Class_For_Ground.h"

class Speed_Camel : public Class_For_Ground
{
public:
	RACE_SIMULATOR_API Speed_Camel();
	RACE_SIMULATOR_API double total_time(const double distance);
};