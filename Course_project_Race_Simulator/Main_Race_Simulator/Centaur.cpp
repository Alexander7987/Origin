#include "Class_For_Ground.h"
#include "Centaur.h"
#include <iostream>

Centaur::Centaur()
{
    speed_ground = 15;
    time_before_rest = 8;
    following_rest = 2;
}

double Centaur::total_time(const double distance)
{
    double a, b;
    a = distance / speed_ground; //находим врем€ движени€ без отдыха
    b = a / time_before_rest; //сколько раз надо отдохнуть?
    if ((b - static_cast<int>(b) == 0) && (b == 0 || b == 1)) //когда число b целое, и если при этом оно равно 0 или 1 то отдыха не будет.
        return a;

    if ((b - static_cast<int>(b) == 0) && b > 1) //когда число b целое, и если оно > 1 то отдых как минимум будет один раз.
        return a + (static_cast<int>(b) - 1) * following_rest;//минус один, т.к. "-1" "состоит" из последнего отдыха. “.е. последнего не будет. Ќапример, если прин€ть, что число b == 3.

    if ((b - static_cast<int>(b) != 0) && b < 1) //когда число b вещественное, и если при этом оно < 1 то отдыха не будет.
        return a;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) == 1) //когда число b вещественное, и если оно в <int> == 1 то отдых будет один раз.
        return a + following_rest;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) >= 2) //когда число b вещественное, и если оно в <int> >= 2 то отдых будет как минимум два раза.
        return a + static_cast<int>(b) * following_rest;
}