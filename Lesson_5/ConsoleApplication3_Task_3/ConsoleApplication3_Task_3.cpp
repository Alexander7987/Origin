#include <iostream>
#include <cstring>
#include <Windows.h>

class Figure
{
protected:
    int k;
public:
    Figure(int k1)
    {
        k = k1;
    }
    virtual bool check()
    {
        if (k == 0)
            return true;
        else
            return false;
    }
    virtual void printf_info_1()
    {
        std::cout << "Фигура: " << std::endl;
        if (check())
            std::cout << "Правильная" << std::endl;
        else
            std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << k << std::endl << std::endl;
    }
};


class Triangle : public Figure
{
private:
    int a, b, c, A, B, C;
public:
    Triangle(int k1, int a1, int b1, int c1, int A1, int B1, int C1) : Figure(k1)
    {
        k = k1, a = a1, b = b1, c = c1, A = A1, B = B1, C = C1;
    }
    bool check() override
    {
        if ((k == 3) && (A + B + C == 180))
            return true;
        else
            return false;
    }
    void printf_info_1() override
    {
        std::cout << "Треугольник: " << std::endl;
        if (check())
            std::cout << "Правильная" << std::endl;
        else
            std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << k << std::endl;
        std::cout << "Стороны: " << "a=" << a << ", b=" << b << ", c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << std::endl << std::endl;
    }
};


class Right_Trianlge : public Figure
{
private:
    int a, b, c, A, B, C;
public:
    Right_Trianlge(int k1, int a1, int b1, int c1, int A1, int B1, int C1) : Figure(k1)
    {
        k = k1, a = a1, b = b1, c = c1, A = A1, B = B1, C = C1;
    }
    bool check() override
    {
        if ((k == 3) && (C == 90))
            return true;
        else
            return false;
    }
    void printf_info_1() override
    {
        std::cout << "Прямоугольный треугольник: " << std::endl;
        if (check())
            std::cout << "Правильная" << std::endl;
        else
            std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << k << std::endl;
        std::cout << "Стороны: " << "a=" << a << ", b=" << b << ", c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << std::endl << std::endl;
    }
};


class Isosceles_Trianlge : public Figure
{
private:
    int a, b, c, A, B, C;
public:
    Isosceles_Trianlge(int k1, int a1, int b1, int c1, int A1, int B1, int C1) : Figure(k1)
    {
        k = k1, a = a1, b = b1, c = c1, A = A1, B = B1, C = C1;
    }
    bool check() override
    {
        if ((k == 3) && (a == c) && (A == C))
            return true;
        else
            return false;
    }
    void printf_info_1() override
    {
        std::cout << "Равнобедренный треугольник: " << std::endl;
        if (check())
            std::cout << "Правильная" << std::endl;
        else
            std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << k << std::endl;
        std::cout << "Стороны: " << "a=" << a << ", b=" << b << ", c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << std::endl << std::endl;
    }
};


class Equilateral_Trianlge : public Figure
{
private:
    int a, b, c, A, B, C;
public:
    Equilateral_Trianlge(int k1, int a1, int b1, int c1, int A1, int B1, int C1) : Figure(k1)
    {
        k = k1, a = a1, b = b1, c = c1, A = A1, B = B1, C = C1;
    }
    bool check() override
    {
        if ((k == 3) && (a == b) && (b == c) && (A == 60) && (B == 60) && (C == 60))
            return true;
        else
            return false;
    }
    void printf_info_1() override
    {
        std::cout << "Равносторонний треугольник: " << std::endl;
        if (check())
            std::cout << "Правильная" << std::endl;
        else
            std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << k << std::endl;
        std::cout << "Стороны: " << "a=" << a << ", b=" << b << ", c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << std::endl << std::endl;
    }
};


class Quadrilateral : public Figure
{
private:
    int a, b, c, d, A, B, C, D;
public:
    Quadrilateral(int k1, int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1) : Figure(k1)
    {
        k = k1, a = a1, b = b1, c = c1, d = d1, A = A1, B = B1, C = C1, D = D1;
    }
    bool check() override
    {
        if ((k == 4) && (A + B + C + D == 360))
            return true;
        else
            return false;
    }
    void printf_info_1() override
    {
        std::cout << "Четырехугольник: " << std::endl;
        if (check())
            std::cout << "Правильная" << std::endl;
        else
            std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << k << std::endl;
        std::cout << "Стороны: " << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl;
    }
};


class Rectanglee : public Figure
{
private:
    int a, b, c, d, A, B, C, D;
public:
    Rectanglee(int k1, int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1) : Figure(k1)
    {
        k = k1, a = a1, b = b1, c = c1, d = d1, A = A1, B = B1, C = C1, D = D1;
    }
    bool check() override
    {
        if ((k == 4) && (a == c) && (b == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90))
            return true;
        else
            return false;
    }
    void printf_info_1() override
    {
        std::cout << "Прямоугольник: " << std::endl;
        if (check())
            std::cout << "Правильная" << std::endl;
        else
            std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << k << std::endl;
        std::cout << "Стороны: " << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl;
    }
};


class Square : public Figure
{
private:
    int a, b, c, d, A, B, C, D;
public:
    Square(int k1, int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1) : Figure(k1)
    {
        k = k1, a = a1, b = b1, c = c1, d = d1, A = A1, B = B1, C = C1, D = D1;
    }
    bool check() override
    {
        if ((k == 4) && (a == b) && (b == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90))
            return true;
        else
            return false;
    }
    void printf_info_1() override
    {
        std::cout << "Квадрат: " << std::endl;
        if (check())
            std::cout << "Правильная" << std::endl;
        else
            std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << k << std::endl;
        std::cout << "Стороны: " << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl;
    }
};


class Parallelogram : public Figure
{
private:
    int a, b, c, d, A, B, C, D;
public:
    Parallelogram(int k1, int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1) : Figure(k1)
    {
        k = k1, a = a1, b = b1, c = c1, d = d1, A = A1, B = B1, C = C1, D = D1;
    }
    bool check() override
    {
        if ((k == 4) && (a == c) && (b == d) && (A == C) && (B == D))
            return true;
        else
            return false;
    }
    void printf_info_1() override
    {
        std::cout << "Параллелограмм: " << std::endl;
        if (check())
            std::cout << "Правильная" << std::endl;
        else
            std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << k << std::endl;
        std::cout << "Стороны: " << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl;
    }
};


class Rhombus : public Figure
{
private:
    int a, b, c, d, A, B, C, D;
public:
    Rhombus(int k1, int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1) : Figure(k1)
    {
        k = k1, a = a1, b = b1, c = c1, d = d1, A = A1, B = B1, C = C1, D = D1;
    }
    bool check() override
    {
        if ((k == 4) && (a == b) && (b == d) && (A == C) && (B == D))
            return true;
        else
            return false;
    }
    void printf_info_1() override
    {
        std::cout << "Ромб: " << std::endl;
        if (check())
            std::cout << "Правильная" << std::endl;
        else
            std::cout << "Неправильная" << std::endl;
        std::cout << "Количество сторон: " << k << std::endl;
        std::cout << "Стороны: " << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << ", B=" << B << ", C=" << C << ", D=" << D << std::endl << std::endl;
    }
};


void printf_1(Figure& default_link) //наследные классы могут быть с типом родителя (иначе пришлось бы делать много ф-ий).
//Так же передаем по ссылке, т.е. не копию, а сам объект, чтобы читался нужный метод (из нужного наследного класса)
{

    default_link.printf_info_1();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Figure figure(0);
    printf_1(figure);
    Triangle triangle(3, 10, 20, 30, 50, 60, 70);
    printf_1(triangle);
    Right_Trianlge right_trianlge(3, 10, 20, 30, 50, 60, 80); //задаем для проверки угол C = 80;
    printf_1(right_trianlge);
    Isosceles_Trianlge isosceles_Trianlge(3, 10, 20, 10, 50, 60, 50);
    printf_1(isosceles_Trianlge);
    Equilateral_Trianlge equilateral_Trianlge(3, 10, 10, 20, 60, 60, 60); //задаем для проверки третью сторону c = 20;
    printf_1(equilateral_Trianlge);
    Quadrilateral quadrilateral(4, 10, 20, 30, 40, 70, 90, 90, 110);
    printf_1(quadrilateral);
    Rectanglee rectangle(4, 10, 20, 10, 30, 90, 90, 90, 90); //задаем для проверки четвертую сторону d = 30;
    printf_1(rectangle);
    Square square(4, 10, 10, 10, 10, 90, 90, 90, 90);
    printf_1(square);
    Parallelogram parallelogram(4, 10, 20, 10, 20, 60, 90, 60, 90);
    printf_1(parallelogram);
    Rhombus rhombus(4, 10, 10, 10, 10, 60, 90, 60, 90);;
    printf_1(rhombus);
    return 0;
}