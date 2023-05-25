#pragma once
#include "Class_For_Ground.h"

class Camel : public Class_For_Ground
{
public:
	RACE_SIMULATOR_API Camel();
	RACE_SIMULATOR_API double total_time(const double distance);
};