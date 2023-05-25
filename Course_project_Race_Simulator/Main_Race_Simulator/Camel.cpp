#include "Class_For_Ground.h"
#include "Camel.h"
#include <iostream>

Camel::Camel()
{
    speed_ground = 10;
    time_before_rest = 30;
    duration_rest_1 = 5;
    following_rest = 8;
}

double Camel::total_time(const double distance)
{
    double a, b;
    a = distance / speed_ground; //находим врем€ движени€ без отдыха
    b = a / time_before_rest; //сколько раз надо отдохнуть?
    if ((b - static_cast<int>(b) == 0) && (b == 0 || b == 1)) //когда число b целое, и если при этом оно равно 0 или 1 то отдыха не будет.
        return a;
        
    if ((b - static_cast<int>(b) == 0) && b > 1) //когда число b целое, и если оно > 1 то отдых как минимум будет один раз.
        return a + duration_rest_1 + (static_cast<int>(b) - 2) * following_rest;//минус два, т.к. "-2" "состоит" из первого отдыха и последнего. “.е. первый уже был, а последнего 
    //не будет. Ќапример, если прин€ть, что число b == 3.

    if ((b - static_cast<int>(b) != 0) && b < 1) //когда число b вещественное, и если при этом оно < 1 то отдыха не будет.
        return a;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) == 1) //когда число b вещественное, и если оно в <int> == 1 то отдых будет один раз.
        return a + duration_rest_1;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) >= 2) //когда число b вещественное, и если оно в <int> >= 2 то отдых будет как минимум два раза.
        return a + duration_rest_1 + (static_cast<int>(b) - 1) * following_rest;   
}
