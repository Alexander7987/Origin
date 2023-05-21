#pragma once
#include <iostream>
#ifdef TASK2LIBRARYDYNAMIC_EXPORTS
#define TASK2LIBRARYDYNAMIC_API __declspec(dllexport)
#else
#define TASK2LIBRARYDYNAMIC_API __declspec(dllimport)
#endif

namespace Task_2
{
	class Leaver
	{
	private:
		std::string s_;
	public:
		TASK2LIBRARYDYNAMIC_API std::string leave(std::string s);
	};
}