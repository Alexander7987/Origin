#include "Task_1.h"
#include <iostream>
#include <string>
#include <Windows.h>

namespace Task_1
{
	std::string Greeter::greet(std::string s)
	{
		s_ = "Здравствуйте, " + s + "!";
		return s_;
	}
}