#include "Right_Triangle.h"
#include <iostream>
#include "Triangle.h"

Right_Triangle::Right_Triangle(int a1, int b1, int c1, int A1, int B1) : Triangle(10, 20, 30, 50, 60, 70)
{
    a = a1, b = b1, c = c1, A = A1, B = B1;
    C = 90;
}

void Right_Triangle::get()
{
    std::cout << "������������� �����������: " << std::endl << "�������: ";
    std::cout << "a=" << a << ", b=" << b << ", c=" << c << std::endl;
    std::cout << "����: " << "A=" << A << ", B=" << B << ", C=" << C << std::endl << std::endl;
}