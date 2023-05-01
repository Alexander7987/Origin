#include "Quadrilateral.h"
#include <iostream>
#include "Rectanglee.h"

Rectanglee::Rectanglee(int a1, int d1) : Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80)
{
    a = c = a1, b = d = d1, A = B = C = D = 90;
}
void Rectanglee::get_1()
{
    std::cout << "Прямоугольник: " << std::endl << "Стороны: ";
    std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
    std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl; 
}
