#pragma once
#include "Quadrilateral.h"

#ifdef TASK5LIBRARYDYNAMIC_EXPORTS
#define TASK5_API __declspec(dllexport)
#else
#define TASK5_API __declspec(dllimport)
#endif

class Square : public Quadrilateral
{
public:
    TASK5_API Square(int a1);
    TASK5_API void get_1() override;
};