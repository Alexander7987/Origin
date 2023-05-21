#pragma once
#include "Quadrilateral.h"

#ifdef TASK4LIBRARYDYNAMIC_EXPORTS
#define TASK4_API __declspec(dllexport)
#else
#define TASK4_API __declspec(dllimport)
#endif

class Rhombus : public Quadrilateral
{
public:
    TASK4_API Rhombus(int a1, int A1, int B1);
    TASK4_API void get_1() override;
};