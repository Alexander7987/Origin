#include "Square.h"
#include <iostream>
#include "ExceptForFigures.h"

Square::Square(int k1, int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1)
{
    if (k1 == 4 && a1 == c1 && b1 == d1 && A1 == 90 && A1 == B1 && B1 == C1 && C1 == D1)
    {
        k = k1, a = b = c = d = a1, A = A1, B = B1, C = C1, D = D1;
        std::cout << "������� (�������: " << a1 << " " << b1 << " " << c1 << " " << d1 << "; ����: " << A1 << " " << B1 << " " << C1 << " " << D1 << ") ������";
        std::cout << std::endl << std::endl;
    }
    else
    {
        if (A1 != 90 || B1 != 90 || C1 != 90 || D1 != 90)
            throw ExceptForFigures("�� ��� ���� ����� 90 � ��������.");
        if (k1 != 4)
            throw ExceptForFigures("���������� ������ �� ����� ������� � ��������.");
        if (a1 != b1 && b1 != c1 && c1 != d1)
            throw ExceptForFigures("������� �� ����� ����� ����� � ��������.");
    }
}