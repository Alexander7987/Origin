#pragma once

#ifdef DYNAMICLIBRARYMAINRACESIMULATOR_EXPORTS
#define RACE_SIMULATOR_API __declspec(dllexport)
#else
#define RACE_SIMULATOR_API __declspec(dllimport)
#endif

class Class_For_Ground
{
protected:
	double speed_ground, time_before_rest, duration_rest_1, duration_rest_2, following_rest;
};