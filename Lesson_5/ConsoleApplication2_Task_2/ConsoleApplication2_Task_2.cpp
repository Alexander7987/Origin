#include <iostream>
#include <cstring>
#include <Windows.h>

class Triangle
{
protected:
    int a, b, c, A, B, C;
public:
    Triangle(int a1, int b1, int c1, int A1, int B1, int C1)
    {
        a = a1, b = b1, c = c1, A = A1, B = B1, C = C1;
    }
    virtual void get()
    {
        std::cout << "Треугольник: " << std::endl << "Стороны: ";
        std::cout << "a=" << a << ", b=" << b << ", c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << std::endl << std::endl;
    }
};


class Right_Trianlge : public Triangle
{
public:
    Right_Trianlge(int a1, int b1, int c1, int A1, int B1) : Triangle(10, 20, 30, 50, 60, 70)
    {
        a = a1, b = b1, c = c1, A = A1, B = B1;
        C = 90;
    }
    void get() override
    {
        std::cout << "Прямоугольный треугольник: " << std::endl << "Стороны: ";
        std::cout << "a=" << a << ", b=" << b << ", c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << std::endl << std::endl;
    }
};


class Isosceles_Trianlge : public Triangle
{
public:
    Isosceles_Trianlge(int a1, int c1, int A1, int C1) : Triangle(10, 20, 30, 50, 60, 70)
    {
        a = b = a1, c = c1, A = C = A1, B = C1;
    }
    void get() override
    {
        std::cout << "Равнобедренный треугольник: " << std::endl << "Стороны: ";
        std::cout << "a=" << a << ", b=" << b << ", c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << std::endl << std::endl;
    }
};


class Equilateral_Trianlge : public Triangle
{
public:
    Equilateral_Trianlge(int a1) : Triangle(10, 20, 30, 50, 60, 70)
    {
        a = b = c = a1, A = C = B = 60;
    }
    void get() override
    {
        std::cout << "Равносторонний треугольник: " << std::endl << "Стороны: ";
        std::cout << "a=" << a << ", b=" << b << ", c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << std::endl << std::endl;
    }
};


class Quadrilateral
{
protected:
    int a, b, c, d, A, B, C, D;
public:
    Quadrilateral(int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1)
    {
        a = a1, b = b1, c = c1, d = d1, A = A1, B = B1, C = C1, D = D1;
    }
    virtual void get_1()
    {
        std::cout << "Четырёхугольник: " << std::endl << "Стороны: ";
        std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl;
    }
};


class Rectanglee : public Quadrilateral
{
public:
    Rectanglee(int a1, int d1) : Quadrilateral (10, 20, 30, 40, 50, 60, 70, 80)
    {
        a = c = a1, b = d = d1, A = B = C = D = 90;
    }
    void get_1() override
    {
        std::cout << "Прямоугольник: " << std::endl << "Стороны: ";
        std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl;
    }
};


class Square : public Quadrilateral
{
public:
    Square(int a1) : Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80)
    {
        a = b = c = d = a1, A = B = C = D = 90;
    }
    void get_1() override
    {
        std::cout << "Квадрат: " << std::endl << "Стороны: ";
        std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl;
    }
};


class Parallelogram : public Quadrilateral
{
public:
    Parallelogram(int a1, int b1, int A1, int B1) : Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80)
    {
        a = c = a1, b = d = b1, A = C = A1, B = D = B1;
    }
    void get_1() override
    {
        std::cout << "Параллелограмм: " << std::endl << "Стороны: ";
        std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl;
    }
};


class Rhombus : public Quadrilateral
{
public:
    Rhombus(int a1, int A1, int B1) : Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80)
    {
        a = b = c = d = a1, A = C = A1, B = D = B1;
    }
    void get_1() override
    {
        std::cout << "Ромб: " << std::endl << "Стороны: ";
        std::cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl;
    }
};


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
    Right_Trianlge right_trianlge(10, 20, 30, 50, 60);  //выполняем конструктор класса Right_Triangle, где присваиваем C=90;
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