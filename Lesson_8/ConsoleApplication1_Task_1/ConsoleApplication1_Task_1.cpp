#include <iostream>
#include <Windows.h>
#include <string>

class bad_lenght
{
public:
	bad_lenght(std::string message)
	{
		this->message = message;
	}
	void print()
	{
		std::cout << this->message;
	}
private:
	std::string message;
};

int function(std::string str, int forbidden_length)
{
	if (str.size() != forbidden_length)
	{
		return str.size();
	}
	else
		throw bad_lenght("Вы ввели слово запретной длины. До свидания.");
}

int main()
{
	std::string str = "";
	int forbidden_length;
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::cout << "Введите запретную длинну: ";
	std::cin >> forbidden_length;
	getchar();
	try
	{
		while (str.size() != forbidden_length)
		{
			std::cout << "Введите слово: ";
			getline(std::cin, str);
			if (function(str, forbidden_length) != forbidden_length)
				std::cout << "Длина слова " << str << " равна " << function(str, forbidden_length) << std::endl;
		}
	}
	catch (bad_lenght& error)
	{
		error.print();
	}
	return 0;
}
