#include "Isosceles_Triangle.h"
#include "Triangle.h"
#include <iostream>

Isosceles_Trianlge::Isosceles_Trianlge(int a1, int c1, int A1, int C1) : Triangle(10, 20, 30, 50, 60, 70)
{
    a = b = a1, c = c1, A = C = A1, B = C1;
}

void Isosceles_Trianlge::get()
{
    std::cout << "Равнобедренный треугольник: " << std::endl << "Стороны: ";
    std::cout << "a=" << a << ", b=" << b << ", c=" << c << std::endl;
    std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << std::endl << std::endl;
}