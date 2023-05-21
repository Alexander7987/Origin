#pragma once

#ifdef TASK5LIBRARYDYNAMIC_EXPORTS
#define TASK5_API __declspec(dllexport)
#else
#define TASK5_API __declspec(dllimport)
#endif

class Quadrilateral
{
protected:
    int a, b, c, d, A, B, C, D;
public:
    TASK5_API Quadrilateral(int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1);
    TASK5_API virtual void get_1();
};