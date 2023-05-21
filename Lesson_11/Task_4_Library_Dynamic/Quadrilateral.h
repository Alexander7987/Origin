#pragma once

#ifdef TASK4LIBRARYDYNAMIC_EXPORTS
#define TASK4_API __declspec(dllexport)
#else
#define TASK4_API __declspec(dllimport)
#endif

class Quadrilateral
{
protected:
    int a, b, c, d, A, B, C, D;
public:
    TASK4_API Quadrilateral(int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1);
    TASK4_API virtual void get_1();
};