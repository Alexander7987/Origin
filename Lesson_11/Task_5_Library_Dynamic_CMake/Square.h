#pragma once
#include "Quadrilateral.h"


class Square : public Quadrilateral
{
public:
    TASK5_API Square(int a1);
    TASK5_API void get_1() override;
};