#include <iostream>
#include <Windows.h>
#include <string>
#include <exception>

class bad_lenght : std::exception
{
public:
	bad_lenght(const char* message)
	{
		this->message = message;
	}
	const char* what() const override
	{
		return message;
	}
private:
	const char* message;
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
		std::cout << error.what();
	}
	return 0;
}
