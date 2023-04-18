#include <iostream>
#include <fstream>
#include <string>

class Address
{
private:
	std::string city, street;
	int number_house, number_appartment;
public:
	Address(std::string city, std::string street, int number_house, int number_appartment)
	{
		this->city = city;
		this->street = street;
		this->number_house = number_house;
		this->number_appartment = number_appartment;
	}
	void Creating_strings(std::ofstream& f2)
	{
		std::string str_1 = std::to_string(this->number_house); //для записи в одну строку преобразуем из int в string
		std::string str_2 = std::to_string(this->number_appartment);
		f2 << this->city << ", " << this->street << ", " << str_1 << ", " << str_2 << std::endl;
	}
	std::string getCity() //Чтобы сортировать слова нужно создать для city метод-геттер getCity и сравнивать строки напрямую
	{
		return this->city;
	}
};


void Creating_outtxt(Address** address, int n) //нет смысла делать эту ф-ию как метод внутри класса, т.к. для вызова этого метода надо  
// вызывать в основном коде address[?]->Creating_outtxt(address). Вместо "?" потребовалось бы писать какой либо номер ячейки. 
// Кроме того, в цикле for при вызове address был бы механизм, похожий на рекурсию, так как мы бы вызывали внутри класса указатель на объект этого класса.
{
	int i, j;
	Address* w;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (address[j]->getCity() > address[j + 1]->getCity()) //при сравнении строк city читает строки по символам и сранивает. Если 1 симв.1строки равен 1 символу 2 строки, то идет дальше
				//и так, пока не найдет отличие. Поэтому метод > < всегда работает, если хотим расположить в алфавитном порядке
			{
				w = address[j + 1];
				address[j + 1] = address[j];
				address[j] = w;
			}
		}
	}
}


int main()
{
	int n, i = 0;
	std::string city, street;
	int number_house, number_appartment;
	std::ifstream f1("in.txt");
	std::ofstream f2("out.txt");
	f1 >> n;
	Address** address = new Address * [n]; //нельзя использовать одномерный динамический массив ввиду невозможности передачи параметров конструктору класса.
	while (i < n) //Если в файле окажется больше записей, чем аллоцировали массив, то произойдет выход за пределы массива. Лучше заполнять массив address в цикле for, 
		// или while (i<n) чтобы такого точно не возникало.
	{
		f1 >> city;
		f1 >> street;
		f1 >> number_house;
		f1 >> number_appartment;
		address[i] = new Address(city, street, number_house, number_appartment); //Создаем указатели на объекты класса (ячейки). В отличие от привычного задания двумерного массива 
		//в указатель address[] заносим адрес только одной ячейки типа Address с передачей соответствующих переменных для приватных полей класса и для конструктора. 
		//Это похоже на одномерный дин. масс., но это двумерный, т.к. здесь указатели address[] могут быть адресами цепочек массивов.
		i++;
	}
	Creating_outtxt(address, n); //передаем указатель двумерного дин. массива, в котором содержатся указатели на объекты класса, которые инициализировали в 73 строке.
	for (i = 0; i < n; i++)
	{
		address[i]->Creating_strings(f2);
	}
	f1.close();
	f2.close();
	for (i = 0; i < n; i++)
		delete address[i];
	delete[] address;
	return 0;
}