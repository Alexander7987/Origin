#pragma once
#include "Triangle.h"

class Isosceles_Trianlge : public Triangle
{
public:
    Isosceles_Trianlge(int a1, int c1, int A1, int C1);
    void get() override;
};