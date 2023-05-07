#include <iostream>
#include <Windows.h>
#define MODE 1

int add(int a, int b)
{
	return a + b;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int a, b;
#ifndef MODE
#error You must declared vareiable MODE
#elif MODE == 0
	std::cout << "Работаю в режиме тренировки";
#elif MODE == 1
	{
		std::cout << "Работаю в боевом режиме" << std::endl;
		std::cout << "Введите первое число: ";
		std::cin >> a;
		std::cout << "Введите второе число: ";
		std::cin >> b;
		std::cout << "Результат сложения: ";
		std::cout << add(a, b);
	}
#else ((MODE!== 1) && (MODE!==0))
	std::cout << "Неизвестный режим, завершение работы";
#endif
	return 0;
}
