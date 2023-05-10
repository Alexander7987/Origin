#include "Equilateral_Triangle.h"
#include "ExceptForFigures.h"
#include <iostream>

Equilateral_Trianlge::Equilateral_Trianlge(int k1, int a1, int b1, int c1, int A1, int B1, int C1)
{
    if (k1 == 3 && a1 == b1 && b1 == c1 && A1 == 60 && B1 == 60 && C1 == 60)
    {
        k = k1, a = b = c = a1, A = C = B = 60;
        std::cout << "�������������� ����������� (�������: " << a1 << " " << b1 << " " << c1 << "; ����: " << A1 << " " << B1 << " " << C1 << ") ������";
        std::cout << std::endl << std::endl;
    }
    else
    {
        if (A1 != 60 || B1 != 60 || C1 != 60)
            throw ExceptForFigures("���� �� ����� ����� ����� (�� 60) � �������������� ������������.");
        if (k1 != 3)
            throw ExceptForFigures("���������� ������ �� ����� ���� � �������������� ������������.");
        if (a1 != b1 || b1 != c1)
            throw ExceptForFigures("������� �� ����� ����� ����� � �������������� ������������.");
    }
}