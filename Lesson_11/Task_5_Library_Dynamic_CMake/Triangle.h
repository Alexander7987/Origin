#pragma once

#ifdef TASK5LIBRARYDYNAMIC_EXPORTS
#define TASK5_API __declspec(dllexport)
#else
#define TASK5_API __declspec(dllimport)
#endif

class Triangle
{
protected:
    int a, b, c, A, B, C;
public:
    TASK5_API Triangle(int a1, int b1, int c1, int A1, int B1, int C1);
    TASK5_API virtual void get();
};