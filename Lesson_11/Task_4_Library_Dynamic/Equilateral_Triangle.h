#pragma once
#include "Triangle.h"

#ifdef TASK4LIBRARYDYNAMIC_EXPORTS
#define TASK4_API __declspec(dllexport)
#else
#define TASK4_API __declspec(dllimport)
#endif

class Equilateral_Trianlge : public Triangle
{
public:
    TASK4_API Equilateral_Trianlge(int a1);
    TASK4_API void get() override;
};