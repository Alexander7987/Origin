#include <iostream>
#include "MyFunctions.h"
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    float x, y;
    int z;
    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "Введите второе число: ";
    std::cin >> y;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> z;
    switch (z)
    {
    case 1:
        addition(x, y);
        break;
    case 2:
        subtraction(x, y);
        break;
    case 3:
        multiplication(x, y);
        break;
    case 4:
        division(x, y);
        break;
    case 5:
        exponentiation(x, y);
        break;
    }
    return 0;
}
