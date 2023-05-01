#pragma once
#include "Quadrilateral.h"

class Rhombus : public Quadrilateral
{
public:
    Rhombus(int a1, int A1, int B1);
    void get_1() override;
};