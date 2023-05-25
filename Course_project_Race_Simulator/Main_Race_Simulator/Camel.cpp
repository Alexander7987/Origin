#include "Class_For_Ground.h"
#include "Camel.h"
#include <iostream>

Camel::Camel()
{
    speed_ground = 10;
    time_before_rest = 30;
    duration_rest_1 = 5;
    following_rest = 8;
}

double Camel::total_time(const double distance)
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
