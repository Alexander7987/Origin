#include <iostream>
#include <string>
#include "Task_1.h"
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Task_1::Greeter greeter;
    std::string s;
    std::cout << "Введите имя: ";
    getline(std::cin, s);
    std::cout << greeter.greet(s);
    return 0;
}
