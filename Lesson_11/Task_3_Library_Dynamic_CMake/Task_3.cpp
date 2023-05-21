#include <iostream>
#include "Task_3.h"

namespace Task_3
{
	std::string Leaver::leave(std::string s)
	{
		s_ = "До свидания, " + s + "!";
		return s_;
	}
}