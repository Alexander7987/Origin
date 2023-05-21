#pragma once
#include <iostream>

namespace Task_1
{
	class Greeter
	{
	private:
		std::string s_;
	public:
		std::string greet(std::string s);
	};
}