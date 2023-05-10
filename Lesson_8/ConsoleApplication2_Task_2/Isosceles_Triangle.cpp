#include "Isosceles_Triangle.h"
#include "ExceptForFigures.h"
#include <iostream>

Isosceles_Trianlge::Isosceles_Trianlge(int k1, int a1, int b1, int c1, int A1, int B1, int C1)
{
    if (k1 == 3 && a1 == c1 && A1 == C1 && A1 + B1 + C1 == 180)
    {
        k = k1, a = a1, b = b1, c = c1, A = A1, B = B1, C = C1;
        std::cout << "Равнобедренный треугольник (стороны: " << a1 << " " << b1 << " " << c1 << "; углы: " << A1 << " " << B1 << " " << C1 << ") создан";
        std::cout << std::endl << std::endl;
    }
    else
    {
        if (A1 + B1 + C1 != 180)
            throw ExceptForFigures("Сумма углов не равна 180 в Равнобедренном треугольнике.");
        if (k1 != 3)
            throw ExceptForFigures("Количество сторон не равно трем в Равнобедренном треугольнике.");
        if (a1 != c1)
            throw ExceptForFigures("Стороны a и c не равны между собой в Равнобедренном треугольнике.");
        if (A1 != C1)
            throw ExceptForFigures("Углы A и C не равны между собой в Равнобедренном треугольнике.");
    }
}