#pragma once
#include "Figure.h"

class Isosceles_Trianlge : public Figure
{
private:
    int a, b, c, A, B, C;
public:
    Isosceles_Trianlge(int k1, int a1, int b1, int c1, int A1, int B1, int C1);
};