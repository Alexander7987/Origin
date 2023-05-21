#include "Quadrilateral.h"
#include "Triangle.h"
#include <iostream>


Quadrilateral::Quadrilateral(int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1)
{
    a = a1, b = b1, c = c1, d = d1, A = A1, B = B1, C = C1, D = D1;
}

void Quadrilateral::get_1()
{
    std::cout << "Четырёхугольник: " << std::endl << "Стороны: ";
    std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
    std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl;
}
