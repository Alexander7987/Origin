#include <iostream>
#include <string>

struct bank_account
{
    int number;
    std::string name;
    float money;
};

void increment_money(bank_account* p)
{
    int n;
    std::cout << "Введите новый баланс: ";
    std::cin >> n;
    p->money = n;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    bank_account person;
    std::cout << "Введите номер счета: ";
    std::cin >> person.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> person.name;
    std::cout << "Введите баланс: ";
    std::cin >> person.money;
    increment_money(&person);
    std::cout << "Ваш счет: " << person.name << ", " << person.number << ", " << person.money;
    return 0;
}