#pragma once
#include "Triangle.h"

#ifdef TASK4LIBRARYDYNAMIC_EXPORTS
#define TASK4_API __declspec(dllexport)
#else
#define TASK4_API __declspec(dllimport)
#endif

class Right_Triangle : public Triangle
{
public:
    TASK4_API Right_Triangle(int a1, int b1, int c1, int A1, int B1);
    TASK4_API void get() override;
};