#pragma once
#include "Triangle.h"


class Isosceles_Trianlge : public Triangle
{
public:
    TASK5_API Isosceles_Trianlge(int a1, int c1, int A1, int C1);
    TASK5_API void get() override;
};