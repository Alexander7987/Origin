#include <iostream>
#include "Task_3.h"

namespace Task_3
{
	std::string Leaver::leave(std::string s)
	{
		s_ = "�� ��������, " + s + "!";
		return s_;
	}
}