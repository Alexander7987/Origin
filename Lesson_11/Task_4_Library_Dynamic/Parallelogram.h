#pragma once
#include "Quadrilateral.h"

#ifdef TASK4LIBRARYDYNAMIC_EXPORTS
#define TASK4_API __declspec(dllexport)
#else
#define TASK4_API __declspec(dllimport)
#endif

class Parallelogram : public Quadrilateral
{
public:
    TASK4_API Parallelogram(int a1, int b1, int A1, int B1);
    TASK4_API void get_1() override;
};