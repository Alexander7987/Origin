#include "Class_For_Air.h"
#include "Flying_carpet.h"
#include <iostream>

Flying_carpet::Flying_carpet()
{
    speed_air = 10;
}

double Flying_carpet::total_time(const double distance)
{
    if (distance < 1000)
        return distance / speed_air;
    if (distance > 1000 && distance < 5000)
        return distance*0.97 / speed_air;
    if (distance > 5000 && distance < 10000)
        return distance * 0.9 / speed_air;
    if (distance >= 10000)
        return distance * 0.95 / speed_air;
}
