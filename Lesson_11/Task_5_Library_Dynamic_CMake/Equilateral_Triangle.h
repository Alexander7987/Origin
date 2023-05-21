#pragma once
#include "Triangle.h"

#ifdef TASK5LIBRARYDYNAMIC_EXPORTS
#define TASK5_API __declspec(dllexport)
#else
#define TASK5_API __declspec(dllimport)
#endif

class Equilateral_Trianlge : public Triangle
{
public:
    TASK5_API Equilateral_Trianlge(int a1);
    TASK5_API void get() override;
};