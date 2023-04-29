#include <iostream>
#include <cstring>
#include <Windows.h>

class Figure
{
protected:
    int sides_count = 0;
    std::string name = "Фигура: ";
public:
    int get_sides_count()
    {
        return sides_count;
    }
    void get_name()
    {
        std::cout << name;
    }
};

class Triangle : public Figure
{
public:
    Triangle()
    {
        sides_count = 3;
        name = "Треугольник: ";
    }
};

class Quadrangle : public Figure
{
public:
    Quadrangle()
    {
        sides_count = 4;
        name = "Четырехугольник: ";
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::cout << "Количество сторон: " << std::endl;
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;
    figure.get_name();
    std::cout << figure.get_sides_count() << std::endl;
    triangle.get_name();
    std::cout << triangle.get_sides_count() << std::endl;
    quadrangle.get_name();
    std::cout << quadrangle.get_sides_count() << std::endl;
    return 0;
}
