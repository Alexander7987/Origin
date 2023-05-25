#include "Class_For_Ground.h"
#include "Centaur.h"
#include <iostream>

Centaur::Centaur()
{
    speed_ground = 15;
    time_before_rest = 8;
    following_rest = 2;
}

double Centaur::total_time(const double distance)
{
    double a, b;
    a = distance / speed_ground; //������� ����� �������� ��� ������
    b = a / time_before_rest; //������� ��� ���� ���������?
    if ((b - static_cast<int>(b) == 0) && (b == 0 || b == 1)) //����� ����� b �����, � ���� ��� ���� ��� ����� 0 ��� 1 �� ������ �� �����.
        return a;

    if ((b - static_cast<int>(b) == 0) && b > 1) //����� ����� b �����, � ���� ��� > 1 �� ����� ��� ������� ����� ���� ���.
        return a + (static_cast<int>(b) - 1) * following_rest;//����� ����, �.�. "-1" "�������" �� ���������� ������. �.�. ���������� �� �����. ��������, ���� �������, ��� ����� b == 3.

    if ((b - static_cast<int>(b) != 0) && b < 1) //����� ����� b ������������, � ���� ��� ���� ��� < 1 �� ������ �� �����.
        return a;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) == 1) //����� ����� b ������������, � ���� ��� � <int> == 1 �� ����� ����� ���� ���.
        return a + following_rest;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) >= 2) //����� ����� b ������������, � ���� ��� � <int> >= 2 �� ����� ����� ��� ������� ��� ����.
        return a + static_cast<int>(b) * following_rest;
}