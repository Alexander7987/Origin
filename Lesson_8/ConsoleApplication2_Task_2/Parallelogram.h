#pragma once
#include "Figure.h"

class Parallelogram : public Figure
{
private:
    int a, b, c, d, A, B, C, D;
public:
    Parallelogram(int k1, int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1);
};