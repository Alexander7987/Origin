#pragma once
#include "Quadrilateral.h"

#ifdef TASK4LIBRARYDYNAMIC_EXPORTS
#define TASK4_API __declspec(dllexport)
#else
#define TASK4_API __declspec(dllimport)
#endif

class Square : public Quadrilateral
{
public:
    TASK4_API Square(int a1);
    TASK4_API void get_1() override;
};