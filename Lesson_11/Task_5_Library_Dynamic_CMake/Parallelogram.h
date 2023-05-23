#pragma once
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral
{
public:
    TASK5_API Parallelogram(int a1, int b1, int A1, int B1);
    TASK5_API void get_1() override;
};