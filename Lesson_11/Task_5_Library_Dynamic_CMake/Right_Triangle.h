#pragma once
#include "Triangle.h"

#ifdef TASK5LIBRARYDYNAMIC_EXPORTS
#define TASK5_API __declspec(dllexport)
#else
#define TASK5_API __declspec(dllimport)
#endif

class Right_Triangle : public Triangle
{
public:
    TASK5_API Right_Triangle(int a1, int b1, int c1, int A1, int B1);
    TASK5_API void get() override;
};