#include <iostream>
#include <string>
#include "Task_3.h"
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Task_3::Leaver leaver;
    std::string s;
    std::cout << "¬ведите им€: ";
    getline(std::cin, s);
    std::cout << leaver.leave(s);
    return 0;
}