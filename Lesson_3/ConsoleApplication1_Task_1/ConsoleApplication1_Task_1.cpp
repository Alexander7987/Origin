#include <iostream>

class Calculator
{
public:
	double num1, num2;
	bool set_num1(double num1) //по условию задания в этом методе выполняем два действия: проверяем на правильность ввода и присваиваем значение полю в случае правильного ввода.
	{
		if (num1 != 0)
		{
			this->num1 = num1;
			return true;
		}
		else
			return false;
	}
	bool set_num2(double num2) // то же самое, что и в set_num1
	{
		if (num2 != 0)
		{
			this->num2 = num2;
			return true;
		}
		else
			return false;
	}
	double add ()
	{
		std::cout << "num1 + num2 = ";
		return num1 + num2;
	}
	double multiply ()
	{
		std::cout << std::endl;
		std::cout << "num1 * num2 = ";
		return num1 * num2;
	}
	double subtract_1_2 ()
	{
		std::cout << std::endl;
		std::cout << "num2 - num1 = ";
		return num2 - num1;
	}
	double subtract_2_1 ()
	{
		std::cout << std::endl;
		std::cout << "num1 - num2 = ";
		return num1 - num2;
	}
	double divide_1_2 ()
	{
		std::cout << std::endl;
		std::cout << "num1 / num2 = ";
		return num1 / num2;
	}
	double divide_2_1 ()
	{
		std::cout << std::endl;
		std::cout << "num2 / num1 = ";
		return num2 / num1;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	double num1=0, num2=0;
	Calculator value;
	for (;;)
	{
		double num1 = 0, num2 = 0; //для повторения запроса, пока сами не закроем консоль
		while (num1 == 0)
		{
			std::cout << "Введите значение num1: ";
			std::cin >> num1;
			if (!value.set_num1(num1))
				std::cout << "Неверный ввод!" << std::endl;
		}
		while (num2 == 0)
		{
			std::cout << "Введите значение num2: ";
			std::cin >> num2;
			if (!value.set_num2(num2))
				std::cout << "Неверный ввод!" << std::endl;
		}
		std::cout << value.add();
		std::cout << value.multiply();
		std::cout << value.subtract_1_2();
		std::cout << value.subtract_2_1();
		std::cout << value.divide_1_2();
		std::cout << value.divide_2_1();
		std::cout << std::endl;
	}
	return 0;
}