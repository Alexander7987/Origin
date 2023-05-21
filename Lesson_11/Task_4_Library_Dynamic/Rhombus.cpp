#include "Quadrilateral.h"
#include <iostream>
#include "Rhombus.h"

Rhombus::Rhombus(int a1, int A1, int B1) : Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80)
{
    a = b = c = d = a1, A = C = A1, B = D = B1;
}
void Rhombus::get_1()
{
    std::cout << "Ромб: " << std::endl << "Стороны: ";
    std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
    std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl;
}