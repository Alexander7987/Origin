#include "Right_Triangle.h"
#include <iostream>
#include "ExceptForFigures.h"

Right_Triangle::Right_Triangle(int k1, int a1, int b1, int c1, int A1, int B1, int C1)
{
    if (k1 == 3 && C1 == 90 && A1 + B1 + C1 == 180)
    {
        k = k1, a = a1, b = b1, c = c1, A = A1, B = B1, C = C1;
        std::cout << "Прямоугольный треугольник (стороны: " << a1 << " " << b1 << " " << c1 << "; углы: " << A1 << " " << B1 << " " << C1 << ") создан";
        std::cout << std::endl << std::endl;
    }
    else
    {
        if (A1 + B1 + C1 != 180)
            throw ExceptForFigures("Сумма углов не равна 180 в Прямоугольном треугольнике.");
        if (k1 != 3)
            throw ExceptForFigures("Количество сторон не равно трем в Прямоугольном треугольнике.");
        if (C1 != 90)
            throw ExceptForFigures("Угол C не равен 90 в Прямоугольном треугольнике.");
    }
}