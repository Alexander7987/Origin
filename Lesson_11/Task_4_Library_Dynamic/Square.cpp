#include "Quadrilateral.h"
#include "Square.h"
#include <iostream>

Square::Square(int a1) : Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80)
{
    a = b = c = d = a1, A = B = C = D = 90;
}

void Square::get_1()
{
    std::cout << "Квадрат: " << std::endl << "Стороны: ";
    std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
    std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl;
}