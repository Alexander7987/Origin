#include <iostream>
#include "Rhombus.h"
#include "ExceptForFigures.h"

Rhombus::Rhombus(int k1, int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1)
{
    if (k1 == 4 && a1 == b1 && b1 == c1 && c1 == d1 && A1 == C1 && B1 == D1 && A1 + B1 + C1 + D1 == 360)
    {
        k = k1, a = c = a1, b = d = b1, A = C = A1, B = D = B1;
        std::cout << "Ромб (стороны: " << a1 << " " << b1 << " " << c1 << " " << d1 << "; углы: " << A1 << " " << B1 << " " << C1 << " " << D1 << ") создан";
        std::cout << std::endl << std::endl;
    }
    else
    {
        if (A1 + B1 + C1 + D1 != 360)
            throw ExceptForFigures("Сумма углов не равна 360 в Ромбе.");
        if (k1 != 4)
            throw ExceptForFigures("Количество сторон не равно четырем в Ромбе.");
        if (a1 != b1 && b1 != c1 && c1 != d1)
            throw ExceptForFigures("Стороны не равны между собой в Ромбе.");
        if (A1 != C1)
            throw ExceptForFigures("Углы A и C не равны между собой в Ромбе.");
        if (B1 != D1)
            throw ExceptForFigures("Углы B и D не равны между собой в Ромбе.");
    }
}