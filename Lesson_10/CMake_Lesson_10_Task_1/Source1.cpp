#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::string s;
	std::cout << "Введите имя: ";
	getline(std::cin, s);
	std::cout << "Здравствуйте, " << s;
	return 0;
}