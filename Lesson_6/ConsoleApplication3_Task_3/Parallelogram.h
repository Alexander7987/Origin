#pragma once
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram(int a1, int b1, int A1, int B1);
    void get_1() override;
};