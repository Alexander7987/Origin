#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::string s;
	std::cout << "������� ���: ";
	getline(std::cin, s);
	std::cout << "������������, " << s;
	return 0;
}