#include "Class_For_Air.h"
#include "Broom.h"
#include <iostream>

Broom::Broom()
{
    speed_air = 20;
}

double Broom::total_time(const double distance)
{
    double c = distance / 1000;
    return (distance * (1 - static_cast<int>(c) * 0.01)) / speed_air;
}
