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


void printf_info_1(Triangle& default_link) //наследные классы могут быть с типом родителя (иначе пришлось бы делать много ф-ий).
//Так же передаем по ссылке, т.е. не копию, а сам объект, чтобы читался нужный метод (из нужного наследного класса)
{
    default_link.get();
}

void printf_info_2(Quadrilateral& default_link) //наследные классы могут быть с типом родителя (иначе пришлось бы делать много ф-ий).
//Так же передаем по ссылке, т.е. не копию, а сам объект, чтобы читался нужный метод (из нужного наследного класса)
{
    default_link.get_1();
}


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Triangle triangle(10, 20, 30, 50, 60, 70); //выполняем конструктор класса Triangle
    Right_Triangle right_trianlge(10, 20, 30, 50, 60);  //выполняем конструктор класса Right_Triangle, где присваиваем C=90;
    Isosceles_Trianlge isosceles_Trianlge(10, 20, 30, 50);
    Equilateral_Trianlge equilateral_Trianlge(30);
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectanglee rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);
    printf_info_1(triangle);
    printf_info_1(right_trianlge);
    printf_info_1(isosceles_Trianlge);
    printf_info_1(equilateral_Trianlge);
    printf_info_2(quadrilateral);
    printf_info_2(rectangle);
    printf_info_2(square);
    printf_info_2(parallelogram);
    printf_info_2(rhombus);
    return 0;
}