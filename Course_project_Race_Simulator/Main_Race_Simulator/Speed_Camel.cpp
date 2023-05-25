#include "Class_For_Ground.h"
#include "Speed_Camel.h"
#include <iostream>

Speed_Camel::Speed_Camel()
{
    speed_ground = 40;
    time_before_rest = 10;
    duration_rest_1 = 5;
    duration_rest_2 = 6.5;
    following_rest = 8;
}

double Speed_Camel::total_time(const double distance)
{
    double a, b;
    a = distance / speed_ground; //������� ����� �������� ��� ������
    b = a / time_before_rest; //������� ��� ���� ���������?
    if ((b - static_cast<int>(b) == 0) && (b == 0 || b == 1)) //����� ����� b �����, � ���� ��� ���� ��� ����� 0 ��� 1 �� ������ �� �����.
        return a;

    if ((b - static_cast<int>(b) == 0) && b == 2) //����� ����� b �����, � ���� ��� == 2 �� ����� ����� ��� ������� ���� ���.
        return a + duration_rest_1;

    if ((b - static_cast<int>(b) == 0) && b == 3 ) //����� ����� b �����, � ���� ��� == 3 �� ����� 2 ������.
        return a + duration_rest_1 + duration_rest_2;

    if ((b - static_cast<int>(b) == 0) && b > 3) //����� ����� b �����, � ���� ��� > 3 �� ����� ����� ��� ������� ��� ����.
        return a + duration_rest_1 + duration_rest_2 + (static_cast<int>(b) - 3) * following_rest; //����� ���, �.�. "-3" "�������" �� �������, ������� � ���������� �������.
    //�.�. ������ � ������ ��� ���, � ����������  �� �����. ��������, ���� �������, ��� ����� b == 3.

    if ((b - static_cast<int>(b) != 0) && b < 1) //����� ����� b ������������, � ���� ��� ���� ��� < 1 �� ������ �� �����.
        return a;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) == 1) //����� ����� b ������������, � ���� ��� � <int> == 1 �� ����� ����� ���� ���.
        return a + duration_rest_1;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) >= 2) //����� ����� b ������������, � ���� ��� � <int> >= 2 �� ����� ����� ��� ������� ��� ����.
        return a + duration_rest_1 + duration_rest_2 + (static_cast<int>(b) - 2) * following_rest;//����� ���, �.�. "-2" "�������" �� �������, ������� �������.
}