#pragma once
#include "Class_For_Air.h"
#include "Class_For_Ground.h"

class Broom : public Class_For_Air
{
public:
	RACE_SIMULATOR_API Broom();
	RACE_SIMULATOR_API double total_time(const double distance);
};