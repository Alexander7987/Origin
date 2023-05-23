#pragma once
#include "Quadrilateral.h"

class Rhombus : public Quadrilateral
{
public:
    TASK4_API Rhombus(int a1, int A1, int B1);
    TASK4_API void get_1() override;
};