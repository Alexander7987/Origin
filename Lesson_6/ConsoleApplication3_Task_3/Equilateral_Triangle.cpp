#include "Equilateral_Triangle.h"
#include "Triangle.h"
#include <iostream>

Equilateral_Trianlge::Equilateral_Trianlge(int a1) : Triangle(10, 20, 30, 50, 60, 70)
{
    a = b = c = a1, A = C = B = 60;
}

void Equilateral_Trianlge::get()
{
    std::cout << "�������������� �����������: " << std::endl << "�������: ";
    std::cout << "a=" << a << ", b=" << b << ", c=" << c << std::endl;
    std::cout << "����: " << "A=" << A << ", B=" << B << ", C=" << C << std::endl << std::endl;
}