#pragma once

class Quadrilateral
{
protected:
    int a, b, c, d, A, B, C, D;
public:
    Quadrilateral(int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1);
    virtual void get_1();
};