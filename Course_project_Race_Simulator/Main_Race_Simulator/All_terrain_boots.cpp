#include "Class_For_Ground.h"
#include "All_terrain_boots.h"
#include <iostream>

All_terrain_boots::All_terrain_boots() //���� �����, ��� � Camel
{
    speed_ground = 6;
    time_before_rest = 60;
    duration_rest_1 = 10;
    following_rest = 5;
}

double All_terrain_boots::total_time(const double distance)
{
    double a, b;
    a = distance / speed_ground; //������� ����� �������� ��� ������
    b = a / time_before_rest; //������� ��� ���� ���������?
    if ((b - static_cast<int>(b) == 0) && (b == 0 || b == 1)) //����� ����� b �����, � ���� ��� ���� ��� ����� 0 ��� 1 �� ������ �� �����.
        return a;

    if ((b - static_cast<int>(b) == 0) && b > 1) //����� ����� b �����, � ���� ��� > 1 �� ����� ��� ������� ����� ���� ���.
        return a + duration_rest_1 + (static_cast<int>(b) - 2) * following_rest;//����� ���, �.�. "-2" "�������" �� ������� ������ � ����������. �.�. ������ ��� ���, � ���������� 
    //�� �����. ��������, ���� �������, ��� ����� b == 3.

    if ((b - static_cast<int>(b) != 0) && b < 1) //����� ����� b ������������, � ���� ��� ���� ��� < 1 �� ������ �� �����.
        return a;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) == 1) //����� ����� b ������������, � ���� ��� � <int> == 1 �� ����� ����� ���� ���.
        return a + duration_rest_1;

    if ((b - static_cast<int>(b) != 0) && static_cast<int>(b) >= 2) //����� ����� b ������������, � ���� ��� � <int> >= 2 �� ����� ����� ��� ������� ��� ����.
        return a + duration_rest_1 + (static_cast<int>(b) - 1) * following_rest;
}