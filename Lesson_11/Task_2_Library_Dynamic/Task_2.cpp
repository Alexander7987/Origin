#include <iostream>
#include "Task_2.h"

namespace Task_2
{
	std::string Leaver::leave(std::string s)
	{
		s_ = "�� ��������, " + s + "!";
		return s_;
	}
}