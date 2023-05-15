#include <iostream>
#include <Windows.h>

class Fraction
{
private:
	int numerator_;
	int denominator_;
	int reserve_numerator;//Резервная переменная для числителя для действий с дробями (сложение,вычитание) для сокращения дроби в конце решений
	int reserve_denominator;//Резервная переменная для знаменателя для действий с дробями (сложение,вычитание) для сокращений дроби в конце решений
public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	void get_default_denominator(Fraction& other)//обязательно передаем по ссылке, иначе не сохранит other для вызывающей функции в перегрузке для "+"!
	{
		reserve_numerator = reserve_numerator * other.reserve_denominator;
		other.reserve_numerator = other.reserve_numerator * reserve_denominator;
		int old = reserve_denominator; //для корректного подсчета other.denominator в 4 (последнем) действии
		reserve_denominator = reserve_denominator * other.reserve_denominator;
		other.reserve_denominator = reserve_denominator;
	}

	void get_fraction(int& a, int& b)
	{
		if (abs(a) >= abs(b)) //Обязательно модуль (для перегрузки оператора ВЫЧИТАНИЯ)
		{
			int old_1 = abs(a); //из-за того, что в цикле меняется значение denominator_
			for (int i = 1; i <= old_1; i++)
			{
				if (a % i == 0 && b % i == 0)
				{
					a = a / i;
					b = b / i;
					i = 1; //начинаем заного, т.к. получили новую дробь (сокращенную первый раз)
				}
			}
		}
		else
		{
			int old_1 = abs(a);
			for (int i = 1; i <= old_1; i++)
			{
				if (a % i == 0 && b % i == 0)
				{
					a = a / i;
					b = b / i;
					i = 1;
				}
			}
		}
	}

	Fraction operator + (Fraction other)
	{
		reserve_numerator = numerator_;
		reserve_denominator = denominator_;
		other.reserve_numerator = other.numerator_;
		other.reserve_denominator = other.denominator_;
		get_default_denominator(other); //приводим дроби к общему знаменателю при помощи перемножения крест - на крест
		reserve_numerator = reserve_numerator + other.reserve_numerator;  //складываем дроби
		int a = reserve_numerator;
		int b = other.reserve_denominator;
		get_fraction(a, b); //сокращаем полученную дробь
		return Fraction(a, b);
	}

	Fraction operator - (Fraction other) //ВНИМАНИЕ.В предыдущей перегрузке оператора "+" в функции приведения к общему знаменателю сохранились значения только для объекта f1, т.к. он передается "левым" (т.е. основным) операндом. Значения под переменной other (для f2) сохранились только для внутреннего использования в перегрузке для "+"! Поэтому значения для f2 в перегрузке для "-" мы должны снова переопределить переменные для other.numerator, а знаменатель взять из denominator_, т.к. он одинаков для всех дробей после приведения к общему знаменателю
	{
		reserve_numerator = numerator_;
		reserve_denominator = denominator_;
		other.reserve_numerator = other.numerator_;
		other.reserve_denominator = other.denominator_;
		get_default_denominator(other); //приводим дроби к общему знаменателю при помощи перемножения крест - на крест
		reserve_numerator = reserve_numerator - other.reserve_numerator;  //вычитаем
		int a = reserve_numerator;
		int b = other.reserve_denominator;
		get_fraction(a, b); //сокращаем полученную дробь
		return Fraction(a, b);
	}

	Fraction operator * (Fraction other)
	{
		reserve_numerator = numerator_;
		reserve_denominator = denominator_;
		reserve_numerator = reserve_numerator * other.numerator_;  //умножаем
		reserve_denominator = reserve_denominator * other.denominator_;
		int a = reserve_numerator;
		int b = reserve_denominator;
		get_fraction(a, b); //сокращаем полученную дробь
		return Fraction(a, b);
	}

	Fraction operator / (Fraction other)
	{
		reserve_numerator = numerator_;
		reserve_denominator = denominator_;
		reserve_numerator = reserve_numerator * other.denominator_;  //умножаем
		reserve_denominator = reserve_denominator * other.numerator_;
		int a = reserve_numerator;
		int b = reserve_denominator;
		get_fraction(a, b); //сокращаем полученную дробь
		return Fraction(a, b);
	}

	Fraction operator - () //унарный минус
	{
		reserve_numerator = numerator_;
		reserve_denominator = denominator_;
		reserve_numerator = reserve_numerator * (-1);
		get_fraction(reserve_numerator, reserve_denominator); //сокращаем полученную дробь
		return Fraction(reserve_numerator, reserve_denominator);
	}

	Fraction operator ++ (int) //постфиксный инкремент
	{
		reserve_numerator = numerator_;
		reserve_denominator = denominator_;
		numerator_ = numerator_ + denominator_;
		get_fraction(numerator_, denominator_); //сокращаем полученную дробь
		return Fraction(reserve_numerator, reserve_denominator); //передаем старые данные, чтобы корректно производить расчеты при сложениях, вычитаниях и т.п.
	}

	Fraction operator ++ () //префиксный инкремент. Здесь работаем с самим объектом, поэтому
	{
		numerator_ = numerator_ + denominator_;
		get_fraction(numerator_, denominator_); //сокращаем полученную дробь
		return Fraction(numerator_, denominator_); //передаем новые данные, чтобы корретно производить расчеты при сложениях, вычитаниях и т.п.

		numerator_ = numerator_ + denominator_;
		get_fraction(numerator_, denominator_); //сокращаем полученную дробь
		return Fraction(numerator_, denominator_);
	}

	Fraction operator -- (int) //постфиксный декремент
	{
		reserve_numerator = numerator_;
		reserve_denominator = denominator_;
		numerator_ = numerator_ - denominator_;
		get_fraction(numerator_, denominator_); //сокращаем полученную дробь
		return Fraction(reserve_numerator, reserve_denominator); //передаем старые данные, чтобы корректно производить расчеты при сложениях, вычитаниях и т.п.
	}

	Fraction operator -- () //префиксный инкремент. Здесь работаем с самим объектом, поэтому
	{
		numerator_ = numerator_ - denominator_;
		get_fraction(numerator_, denominator_); //сокращаем полученную дробь
		return Fraction(numerator_, denominator_); //передаем новые данные, чтобы корретно производить расчеты при сложениях, вычитаниях и т.п.

		numerator_ = numerator_ + denominator_;
		get_fraction(numerator_, denominator_); //сокращаем полученную дробь
		return Fraction(numerator_, denominator_);
	}
	friend std::ostream& operator << (std::ostream& out, Fraction other);
};


std::ostream& operator << (std::ostream& out, Fraction other)
{
	std::cout << other.numerator_ << "/" << other.denominator_;
	return out;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int a1, a2, b1, b2;
	std::cout << "Enter numerator 1: ";
	std::cin >> a1;
	std::cout << "Enter denominator 1: ";
	std::cin >> b1;
	Fraction f1(a1, b1);
	std::cout << "Enter numerator 2: ";
	std::cin >> a2;
	std::cout << "Enter denominator 2: ";
	std::cin >> b2;
	Fraction f2(a2, b2);
	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
	std::cout << f1 << " - " << f2 << " = " << f1 - f2 << std::endl;
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
	std::cout << f1 << " / " << f2 << " = " << f1 / f2 << std::endl;
	std::cout << "++" << f1;
	std::cout << " * " << f2 << " = " << ++f1 * f2 << std::endl;
	std::cout << "Значение дроби 1 = " << f1 << std::endl;
	std::cout << f1; 
	std::cout << "--" << " * " << f2 << " = " << f1-- * f2 << std::endl;
	std::cout << "Значение дроби 1 = " << f1;
	return 0;
}