#include <iostream>
#include <string>
#include "Task_2.h"
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Task_2::Leaver leaver;
    std::string s;
    std::cout << "Введите имя: ";
    getline(std::cin, s);
    std::cout << leaver.leave(s);
    return 0;
}