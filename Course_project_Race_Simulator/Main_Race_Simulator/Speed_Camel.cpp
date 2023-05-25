#include "Class_For_Ground.h"
#include "Speed_Camel.h"
#include <iostream>

Speed_Camel::Speed_Camel()
{
    speed_ground = 40;
    time_before_rest = 10;
    duration_rest_1 = 5;
    duration_rest_2 = 6.5;
    following_rest = 8;
}

double Speed_Camel::total_time(const double distance)
{
    double a, b;
    a = distance / speed_ground; //находим время движения без отдыха
    b = a / time_before_rest; //сколько раз надо отдохнуть?
    if ((b - static_cast<int>(b) == 0) && (b == 0 || b == 1)) //когда число b целое, и если при этом оно равно 0 или 1 то отдыха не будет.
        return a;

    if ((b - static_cast<int>(b) == 0) && b == 2) //когда число b целое, и если оно == 2 то отдых будет как минимум один раз.
        return a + duration_rest_1;

    if ((b - static_cast<int>(b) == 0) && b == 3 ) //когда число b целое, и если оно == 3 то будет 2 отдыха.
        return a + duration_rest_1 + duration_rest_2;

    if ((b - static_cast<int>(b) == 0) && b > 3) //когда число b целое, и если оно > 3 то отдых будет как минимум три раза.
        return a + duration_rest_1 + duration_rest_2 + (static_cast<int>(b) - 3) * following_rest; //минус три, т.к. "-3" "состоит" из первого, второго и последнего отдыхов.
    //Т.е. первый и второй уже был, а последнего  не будет. Например, если принять, что число b == 3.

    if ((b - static_cast<int>(b) != 0) && b < 1) //когда число b вещественное, и если при этом оно < 1 то отдыха не будет.
        return a;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) == 1) //когда число b вещественное, и если оно в <int> == 1 то отдых будет один раз.
        return a + duration_rest_1;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) >= 2) //когда число b вещественное, и если оно в <int> >= 2 то отдых будет как минимум два раза.
        return a + duration_rest_1 + duration_rest_2 + (static_cast<int>(b) - 2) * following_rest;//минус два, т.к. "-2" "состоит" из первого, второго отдыхов.
}