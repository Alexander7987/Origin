#pragma once
#include "Triangle.h"

#ifdef TASK5LIBRARYDYNAMIC_EXPORTS
#define TASK5_API __declspec(dllexport)
#else
#define TASK5_API __declspec(dllimport)
#endif

class Isosceles_Trianlge : public Triangle
{
public:
    TASK5_API Isosceles_Trianlge(int a1, int c1, int A1, int C1);
    TASK5_API void get() override;
};