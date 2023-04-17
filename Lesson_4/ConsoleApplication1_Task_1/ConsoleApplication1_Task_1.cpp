#include <iostream>
#include <fstream>
#include <string>

class Adress
{
public:
    std::string city, street;
    int number_house, number_appartment;
    void writing_in_outtxt(std::ofstream& f2)
    {
        f2 << city << " ";
        f2 << street << " ";
        f2 << number_house << " ";
        f2 << number_appartment << std::endl;
    } 
}; 

int main()
{    
    int N,i=1,j=0;
    std::string str;
    Adress adress;
    std::ifstream f1("in.txt");
    std::ofstream f2("out.txt");
    f1 >> N;
    f1.close(); //закроем, для безопасного начала работы циклов ниже
    f2 << N << std::endl;
    while (N > 0) // цикл for (j = 0; j < N; j++) не подходит, т.к. меняем значение N. Но можно N записать в др. переменную, но это увеличит кол-во переменных.
    {
        f1.open("in.txt");
        while (f1 >> str) // Метод работает так: начинаем читать из файла, и, дойдя до "первой" строки последнего адреса, записываем его первым с помощью метода
    //в файл f2. Далее уменьшаем порог (переменная N) последнего адреса на единицу и пересчитываем номер "первой" строки, но теперь уже друогого "последнего" адреса.
        {
            if (i == (N * 4)-3)
            {
                f1 >> adress.city;
                f1 >> adress.street;
                f1 >> adress.number_house;
                f1 >> adress.number_appartment;
                adress.writing_in_outtxt(f2);
                break;
            }
            i++;
        }
        f1.close();
        i = 1;
        N--;
    }
    f1.close();
    f2.close();
    return 0;
}
