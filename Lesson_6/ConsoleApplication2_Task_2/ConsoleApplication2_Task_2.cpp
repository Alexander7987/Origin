#include <iostream>
#include <string>
#include <Windows.h>
#include "MyCounter.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double n;
    char ch = 0;
    Counter* value = 0;
    std::string s;
    while (s != "да" && s != "нет")
    {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        getline(std::cin, s);
        if (s == "нет")
        {
            std::cout << "Начальное значение счётчика: ";
            value = new Counter;
            std::cout << std::endl;
        }
        else
            if (s == "да")
            {
                std::cout << "Введите начальное значение счётчика: ";
                std::cin >> n;
                value = new Counter(n);
            }
    }
    while (ch != 'x')
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> ch;
        if (ch == '+')
            value->increment();
        if (ch == '-')
            value->decrement();
        if (ch == '=')
            value->equal();
    }
    delete value;
    std::cout << "До свидания!";
    return 0;
}