#include "MyFunctions.h"
#include <iostream>

void addition(float x, float y)
{
	std::cout << x << " + " << y << " = " << x + y;
}

void subtraction(float x, float y)
{
	std::cout << x << " - " << y << " = " << x - y;
}

void multiplication(float x, float y)
{
	std::cout << x << " * " << y << " = " << x * y;
}

void division(float x, float y)
{
	std::cout << x << " / " << y << " = " << x / y;
}

void exponentiation(float x, float y)
{
	std::cout << x << " в степени " << y << " = " << pow(x, y);
}