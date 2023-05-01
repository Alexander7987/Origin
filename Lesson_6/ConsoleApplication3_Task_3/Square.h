#pragma once
#include "Quadrilateral.h"

class Square : public Quadrilateral
{
public:
    Square(int a1);
    void get_1() override;
};