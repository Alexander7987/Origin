#include "Class_For_Ground.h"
#include "All_terrain_boots.h"
#include <iostream>

All_terrain_boots::All_terrain_boots() //тоже самое, что и Camel
{
    speed_ground = 6;
    time_before_rest = 60;
    duration_rest_1 = 10;
    following_rest = 5;
}

double All_terrain_boots::total_time(const double distance)
{
    double a, b;
    a = distance / speed_ground; //находим время движения без отдыха
    b = a / time_before_rest; //сколько раз надо отдохнуть?
    if ((b - static_cast<int>(b) == 0) && (b == 0 || b == 1)) //когда число b целое, и если при этом оно равно 0 или 1 то отдыха не будет.
        return a;

    if ((b - static_cast<int>(b) == 0) && b > 1) //когда число b целое, и если оно > 1 то отдых как минимум будет один раз.
        return a + duration_rest_1 + (static_cast<int>(b) - 2) * following_rest;//минус два, т.к. "-2" "состоит" из первого отдыха и последнего. Т.е. первый уже был, а последнего 
    //не будет. Например, если принять, что число b == 3.

    if ((b - static_cast<int>(b) != 0) && b < 1) //когда число b вещественное, и если при этом оно < 1 то отдыха не будет.
        return a;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) == 1) //когда число b вещественное, и если оно в <int> == 1 то отдых будет один раз.
        return a + duration_rest_1;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) >= 2) //когда число b вещественное, и если оно в <int> >= 2 то отдых будет как минимум два раза.
        return a + duration_rest_1 + (static_cast<int>(b) - 1) * following_rest;
}