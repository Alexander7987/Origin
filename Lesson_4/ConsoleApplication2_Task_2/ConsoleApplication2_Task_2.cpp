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
	std::string str;
	void Creating_string()
	{
		std::string str_1 = std::to_string(this->number_house);
		std::string str_2 = std::to_string(this->number_appartment);
		this->str = this->city + ", " + this->street + ", " + str_1 + ", " + str_2;
	}
};

void Creating_outtxt(Address** address, std::ofstream& f2, int n)
{
	int i, j;
	Address* w;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (address[j]->str[0] > address[j + 1]->str[0])
			{
				w = address[j + 1];
				address[j + 1] = address[j];
				address[j] = w; 
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		f2 << address[i]->str << std::endl;
	} 
}

int main()
{
	int n,i=-1;
	std::string city, street;
	int number_house, number_appartment;
	std::ifstream f1("in.txt");
	std::ofstream f2("out.txt");
	f1 >> n;
	Address** address = new Address* [n];
	while (!f1.eof())
	{
		i++;
		f1 >> city;
		f1 >> street;
		f1 >> number_house;
		f1 >> number_appartment;
		address[i] = new Address(city, street, number_house, number_appartment);
	}
	for (i = 0; i < n; i++)
		address[i]->Creating_string();
	Creating_outtxt(address, f2, n);
	f1.close();
	f2.close();
	return 0;
}