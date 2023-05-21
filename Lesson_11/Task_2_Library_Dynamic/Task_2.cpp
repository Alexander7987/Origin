#include <iostream>
#include "Task_2.h"

namespace Task_2
{
	std::string Leaver::leave(std::string s)
	{
		s_ = "До свидания, " + s + "!";
		return s_;
	}
}