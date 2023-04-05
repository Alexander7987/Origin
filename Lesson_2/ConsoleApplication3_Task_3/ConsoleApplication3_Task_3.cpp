#include <iostream>
#include <string>

struct adress
{
    std::string country, town, street, house_number;
    int apartment_number, index;
};

void show_adress(adress& data)
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Страна: " << data.country << std::endl;
    std::cout << "Город: " << data.town << std::endl;
    std::cout << "Улица: " << data.street << std::endl;
    std::cout << "Номер дома: " << data.house_number << std::endl;
    std::cout << "Номер квартиры: " << data.apartment_number << std::endl;
    std::cout << "Индекс: " << data.index << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    adress data;
    std::cout << "Введите страну: ";
    std::cin >> data.country;
    std::cout << "Введите город: ";
    std::cin >> data.town;
    std::cout << "Введите улицу: ";
    std::cin >> data.street;
    std::cout << "Введите номер дома: ";
    std::cin >> data.house_number;
    std::cout << "Введите номер квартиры: ";
    std::cin >> data.apartment_number;
    std::cout << "Введите индекс: ";
    std::cin >> data.index;
    std::cout << std::endl;
    show_adress(data);
    return 0;
}