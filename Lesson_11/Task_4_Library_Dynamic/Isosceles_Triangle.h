#pragma once
#include "Triangle.h"


class Isosceles_Trianlge : public Triangle
{
public:
    TASK4_API Isosceles_Trianlge(int a1, int c1, int A1, int C1);
    TASK4_API void get() override;
};