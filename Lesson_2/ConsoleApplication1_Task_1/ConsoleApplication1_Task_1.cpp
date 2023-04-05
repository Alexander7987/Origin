#include <iostream>

enum class seasons
{
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int n = -1;
    while (n != 0)
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> n;
        if (n < 0 || n>12)
        {
            std::cout << "Неправильный номер!" << std::endl;
            continue;
        }
        switch (static_cast<seasons>(n))
        {
        case seasons::Январь:
        {
            std::cout << "Январь" << std::endl;
            break;
        }
        case seasons::Февраль:
        {
            std::cout << "Февраль" << std::endl;
            break;
        }
        case seasons::Март:
        {
            std::cout << "Март" << std::endl;
            break;
        }
        case seasons::Апрель:
        {
            std::cout << "Апрель" << std::endl;
            break;
        }
        case seasons::Май:
        {
            std::cout << "Май" << std::endl;
            break;
        }
        case seasons::Июнь:
        {
            std::cout << "Июнь" << std::endl;
            break;
        }
        case seasons::Июль:
        {
            std::cout << "Июль" << std::endl;
            break;
        }
        case seasons::Август:
        {
            std::cout << "Август" << std::endl;
            break;
        }
        case seasons::Сентябрь:
        {
            std::cout << "Сентябрь" << std::endl;
            break;
        }
        case seasons::Октябрь:
        {
            std::cout << "Октябрь" << std::endl;
            break;
        }
        case seasons::Ноябрь:
        {
            std::cout << "Ноябрь" << std::endl;
            break;
        }
        case seasons::Декабрь:
        {
            std::cout << "Декабрь" << std::endl;
            break;
        }
        case static_cast<seasons>(0):
        {
            std::cout << "До свидания";
            break;
        }
        }
    }
    return 0;
}