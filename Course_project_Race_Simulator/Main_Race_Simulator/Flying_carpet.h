#pragma once
#include "Class_For_Air.h"
#include "Class_For_Ground.h"

class Flying_carpet : public Class_For_Air
{
public:
	RACE_SIMULATOR_API Flying_carpet();
	RACE_SIMULATOR_API double total_time(const double distance);
};