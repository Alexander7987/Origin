#include <iostream>
#include "Parallelogram.h"
#include "ExceptForFigures.h"


Parallelogram::Parallelogram(int k1, int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1)
{
    if (k1 == 4 && a1 == c1 && b1 == d1 && A1 == C1 && B1 == D1 && A1 + B1 + C1 + D1 == 360)
    {
        k = k1, a = c = a1, b = d = b1, A = C = A1, B = D = B1;
        std::cout << "�������������� (�������: " << a1 << " " << b1 << " " << c1 << " " << d1 << "; ����: " << A1 << " " << B1 << " " << C1 << " " << D1 << ") ������";
        std::cout << std::endl << std::endl;
    }
    else
    {
        if (A1 + B1 + C1 + D1 != 360)
            throw ExceptForFigures("����� ����� �� ����� 360 � ���������������.");
        if (k1 != 4)
            throw ExceptForFigures("���������� ������ �� ����� ������� � ���������������.");
        if (a1 != c1)
            throw ExceptForFigures("������� a � c �� ����� ����� ����� � ���������������.");
        if (b1 != d1)
            throw ExceptForFigures("������� b � d �� ����� ����� ����� � ���������������.");
        if (A1 != C1)
            throw ExceptForFigures("���� A � C �� ����� ����� ����� � ���������������.");
        if (B1 != D1)
            throw ExceptForFigures("���� B � D �� ����� ����� ����� � ���������������.");
    }
}