#pragma once
#include "Triangle.h"

class Right_Triangle : public Triangle
{
public:
    TASK5_API Right_Triangle(int a1, int b1, int c1, int A1, int B1);
    TASK5_API void get() override;
};