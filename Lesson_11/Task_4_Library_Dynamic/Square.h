#pragma once
#include "Quadrilateral.h"


class Square : public Quadrilateral
{
public:
    TASK4_API Square(int a1);
    TASK4_API void get_1() override;
};