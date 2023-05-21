#include "Triangle.h"
#include <iostream>


Triangle::Triangle(int a1, int b1, int c1, int A1, int B1, int C1)
{
    a = a1, b = b1, c = c1, A = A1, B = B1, C = C1;
}

void Triangle::get()
{
    std::cout << "Треугольник: " << std::endl << "Стороны: ";
    std::cout << "a=" << a << ", b=" << b << ", c=" << c << std::endl;
    std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << std::endl << std::endl;
}