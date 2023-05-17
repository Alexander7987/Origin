#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;
	int reserve_numerator;//Резервная переменная для числителя для действий с дробями для сокращения дроби
	double delta = 0.1;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	void get_default_denominator(Fraction& other)//привожу к общему знаменателю только числители для сравнения дробей. Обязательно по ссылке для сохранения other.
		//Внимание! other сохраняется только для текущей ВЫЗЫВАЮЩЕЙ функции. Поэтому в каждой новой перегрузке вызываем заного.
	{
		reserve_numerator = numerator_;
		reserve_numerator = reserve_numerator * other.denominator_;
		other.numerator_ = other.numerator_ * denominator_;
	}
	bool operator == (Fraction other)
	{
		get_default_denominator(other);
		return (abs(reserve_numerator - other.numerator_) < delta);
	}
	bool operator != (Fraction other)
	{
		return !(*this == other);
	}
	bool operator < (Fraction other)
	{
		get_default_denominator(other);
		return (reserve_numerator < other.numerator_);
	}
	bool operator > (Fraction other)
	{
		return other < *this;
	}
	bool operator <= (Fraction other)
	{
		return !(*this > other);
	}
	bool operator >= (Fraction other)
	{
		return !(*this < other);
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);
	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}