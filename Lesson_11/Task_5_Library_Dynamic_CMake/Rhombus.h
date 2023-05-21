#pragma once
#include "Quadrilateral.h"

#ifdef TASK5LIBRARYDYNAMIC_EXPORTS
#define TASK5_API __declspec(dllexport)
#else
#define TASK5_API __declspec(dllimport)
#endif

class Rhombus : public Quadrilateral
{
public:
    TASK5_API Rhombus(int a1, int A1, int B1);
    TASK5_API void get_1() override;
};