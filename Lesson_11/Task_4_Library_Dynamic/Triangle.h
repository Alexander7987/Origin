#pragma once

#ifdef TASK4LIBRARYDYNAMIC_EXPORTS
#define TASK4_API __declspec(dllexport)
#else
#define TASK4_API __declspec(dllimport)
#endif

class Triangle
{
protected:
    int a, b, c, A, B, C;
public:
    TASK4_API Triangle(int a1, int b1, int c1, int A1, int B1, int C1);
    TASK4_API virtual void get();
};