#pragma once
#include "Quadrilateral.h"


class Rhombus : public Quadrilateral
{
public:
    TASK5_API Rhombus(int a1, int A1, int B1);
    TASK5_API void get_1() override;
};