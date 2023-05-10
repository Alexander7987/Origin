#include <iostream>
#include "Rectanglee.h"
#include "ExceptForFigures.h"

Rectanglee::Rectanglee(int k1, int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1)
{
    if (k1 == 4 && a1 == c1 && b1 == d1 && A1 == 90 && A1 == B1 && B1 == C1 && C1 == D1)
    {
        k = k1, a == a1, b = b1, c = c1, d = d1, A = A1, B = B1, C = C1, D = D1;
        std::cout << "Прямоугольник (стороны: " << a1 << " " << b1 << " " << c1 << " " << d1 << "; углы: " << A1 << " " << B1 << " " << C1 << " " << D1 << ") создан";
        std::cout << std::endl << std::endl;
    }
    else
    {
        if (A1 != 90 || B1 != 90 || C1 != 90 || D1 != 90)
            throw ExceptForFigures("Не все углы равны 90 в Прямоугольнике.");
        if (k1 != 4)
            throw ExceptForFigures("Количество сторон не равно четырем в Прямоугольнике.");
        if (a1 != c1)
            throw ExceptForFigures("Стороны a и c не равны между собой в Прямоугольнике.");
        if (b1 != d1)
            throw ExceptForFigures("Стороны b и d не равны между собой в Прямоугольнике.");
    }
}