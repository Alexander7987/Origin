#include "Right_Triangle.h"
#include <iostream>
#include "ExceptForFigures.h"

Right_Triangle::Right_Triangle(int k1, int a1, int b1, int c1, int A1, int B1, int C1)
{
    if (k1 == 3 && C1 == 90 && A1 + B1 + C1 == 180)
    {
        k = k1, a = a1, b = b1, c = c1, A = A1, B = B1, C = C1;
        std::cout << "������������� ����������� (�������: " << a1 << " " << b1 << " " << c1 << "; ����: " << A1 << " " << B1 << " " << C1 << ") ������";
        std::cout << std::endl << std::endl;
    }
    else
    {
        if (A1 + B1 + C1 != 180)
            throw ExceptForFigures("����� ����� �� ����� 180 � ������������� ������������.");
        if (k1 != 3)
            throw ExceptForFigures("���������� ������ �� ����� ���� � ������������� ������������.");
        if (C1 != 90)
            throw ExceptForFigures("���� C �� ����� 90 � ������������� ������������.");
    }
}