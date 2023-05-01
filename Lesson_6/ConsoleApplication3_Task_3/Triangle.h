#pragma once

class Triangle
{
protected:
    int a, b, c, A, B, C;
public:
    Triangle(int a1, int b1, int c1, int A1, int B1, int C1);
    virtual void get();
};