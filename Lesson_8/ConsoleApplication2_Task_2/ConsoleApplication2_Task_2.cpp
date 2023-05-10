#include <iostream>
#include <cstring>
#include <Windows.h>
#include "Triangle.h"
#include "Right_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Equilateral_Triangle.h"
#include "Quadrilateral.h"
#include "Rectanglee.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include <exception>
#include "ExceptForFigures.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    try
    {
        Triangle triangle(3, 10, 20, 30, 50, 60, 70);
        Right_Triangle right_trianlge(3, 20, 30, 50, 45, 45, 90);  
        Isosceles_Trianlge isosceles_Trianlge(3, 10, 20, 10, 50, 80, 50);
        Equilateral_Trianlge equilateral_Trianlge(3, 10, 10, 10, 60, 60, 60);
        Quadrilateral quadrilateral(4, 10, 20, 30, 40, 70, 110, 70, 110); // Для теста четвертый угол делаю таким, чтобы сумма не была равна 360.
        Rectanglee rectangle(4, 30, 40, 30, 40, 90, 90, 90, 90);
        Square square(4, 10, 10, 10, 10, 90, 90, 90, 90);
        Parallelogram parallelogram(4, 30, 40, 30, 40, 70, 110, 70 ,110);
        Rhombus rhombus(4, 30, 30, 30, 30, 70, 110, 70, 110);
    }
    catch (const ExceptForFigures& ex)
    {
        std::cout << "Ошибка создания фигуры. Причина: " << ex.what() << std::endl;
    }
    return 0;
}