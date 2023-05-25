#include "Class_For_Air.h"
#include "Eagle.h"
#include <iostream>

Eagle::Eagle()
{
    speed_air = 8;
}

double Eagle::total_time(const double distance)
{
        return distance * 0.94 / speed_air;
}
