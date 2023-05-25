#include <iostream>
#include <Windows.h>
#include "Class_For_Air.h"
#include "Class_For_Ground.h"
#include "Camel.h"
#include "Speed_Camel.h"
#include "Centaur.h"
#include "All_terrain_boots.h"
#include "Flying_carpet.h"
#include "Eagle.h"
#include "Broom.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n = -1, m = -1, k = -1, t = -1, i = -1, y = 1, point_error = 0;
	std::string name_race, name_member;
	std::string* array_names_members = nullptr;
	std::string* array_names_members_1 = nullptr;
	std::string s;
	double* array_time_members = nullptr;
	double* array_time_members_1 = nullptr;
	double distance = -1, w = -1;
	Camel camel;
	All_terrain_boots all_terrain_boots;
	Broom broom;
	Centaur centaur;
	Eagle eagle;
	Speed_Camel speed_camel;
	Flying_carpet flying_carpet;
	while (t != 2)
	{
		if (k == -1)
		{
			std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
			std::cout << "1. Гонка для наземного транспорта" << std::endl;
			std::cout << "2. Гонка для воздушного транспорта" << std::endl;
			std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
			std::cout << "Выберите тип гонки: ";
			std::cin >> n;
		}
		if ((n != 1) && (n != 2) && (n != 3))
		{
			std::cout << std::endl << "Неверная команда, повторите ввод." << std::endl << std::endl;
			continue;
		}
		if (n == 1)
		{
			name_race = "Гонка для наземного транспорта.";
			std::cout << std::endl;
		}	
		if (n == 2)
		{
			name_race = "Гонка для воздушного транспорта.";
			std::cout << std::endl;
		}
		if (n == 3)
		{
			name_race = "Гонка для наземного и воздушного транспорта.";
			std::cout << std::endl;
		}	
		while (distance < 0)
		{
			std::cout << "Укажите длину дистанции (должна быть положительна): ";
			std::cin >> distance;
		}
		std::cout << std::endl;
		if (i <= 0)
		{
			std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl;
			std::cout << "1. Зарегистрировать транспорт" << std::endl;
			k = -1;
		}
		if (i > 0)
		{
			std::cout << "1. Зарегистрировать транспорт" << std::endl;
			std::cout << "2. Начать гонку" << std::endl;
		}
		std::cout << "Выберите действие: ";
		std::cin >> m;
		std::cout << std::endl;
		if (m == 1) //для захода в цикл, в случае, если вернемся регистрировать транспорт в условный оператор if (i > 0)
		{
			k = -1;
		}
		switch (m)
		{
		case 1:
		{
			while (k != 0)
			{
				std::cout << name_race << " " << "Расстояние: " << distance;
				if (i != -1)
				{
					std::cout << std::endl;
					std::cout << "Зарегистрированные транспортные средства: ";
					for (int j = 0; j <= i; j++)
						std::cout << array_names_members[j] << ", ";
				}
				std::cout << std::endl;
				std::cout << "1. Ботинки-вездеходы" << std::endl;
				std::cout << "2. Метла" << std::endl;
				std::cout << "3. Верблюд" << std::endl;
				std::cout << "4. Кентавр" << std::endl;
				std::cout << "5. Орёл" << std::endl;
				std::cout << "6. Верблюд-быстроход" << std::endl;
				std::cout << "7. Ковёр-самолет" << std::endl;
				std::cout << "0. Закончить регистрацию" << std::endl;
				std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
				std::cin >> k;
				if ((n == 1 && (k == 2 || k == 5 || k ==  7)) || (n == 2 && (k == 1 || k == 3 || k == 4 || k == 6)) || k >= 8)
				{
					std::cout << std::endl << "Попытка зарегистрировать неправильный тип ТС!" << std::endl << std::endl;
					point_error = 1;
				}
				if (point_error == 1)
				{
					point_error = 0;
					continue;
				}
				// БОТИНКИ-ВЕЗДЕХОДЫ
				if (k == 1) //внутри этих условных операторов реализую механизм динамического изменения динамического массива (метод пересыпания). Но можно и без него, т.к. 
					//стоит условие, что не более одного ТС одинакового названия. Но я не знаю, какой тип гонки выберет пользователь, а от этого зависит количество участников,
					//поэтому оставляю. И вдруг мы захотим увеличить в условии кол-во участников.
				{
					if (i != -1)//Проверка для условия: не более одного ТС одинакового названия. Этот проверка не будет работать, пока не выбран до этого хотя бы 1 ТС.
					{
						for (int p = 0; p <= i; p++)
						{
							if (array_names_members[p] == "Ботинки-вездеходы")
							{
								point_error = 1;
								std::cout << std::endl << "Ботинки-вездеходы уже зарегистрированы!" << std::endl << std::endl;
								break;
							}
						}
					}
					if (point_error == 1)
					{
						point_error = 0;
						continue;
					}
					i++;//СЧЕТЧИК РАЗМЕРНОСТИ ДИНАМИЧЕСКОГО МАССИВА
					if (i == 0)//для массива имен ТС
					{
						array_names_members = new std::string[1];
						array_names_members[i] = "Ботинки-вездеходы";
					}
					if (i > 0)
					{
						array_names_members_1 = new std::string[i + 1]; //"+1", т.к. в операторе [] количество эл-ов. А это число отличается от нумерации этих эл-ов на единицу в плюс,
						//т.к. первый элемент имеет индекс "0".
						for (int j = 0; j < i; j++)
							array_names_members_1[j] = array_names_members[j];
						delete[] array_names_members;
						array_names_members = array_names_members_1;
						array_names_members[i] = "Ботинки-вездеходы";
					}
					if (i == 0) //для массива итогового времени каждого ТС
					{
						array_time_members = new double[1];
						array_time_members[i] = all_terrain_boots.total_time(distance);
					}
					if (i > 0)
					{
						array_time_members_1 = new double[i + 1];
						for (int j = 0; j < i; j++)
							array_time_members_1[j] = array_time_members[j];
						delete[] array_time_members;
						array_time_members = array_time_members_1;
						array_time_members[i] = all_terrain_boots.total_time(distance);
					}
					std::cout << "Ботинки-вездеходы успешно зарегистрированы!" << std::endl;
					std::cout << std::endl;
				}


				if (k == 2) //МЕТЛА
				{
					if (i != -1)
					{
						for (int p = 0; p <= i; p++)
						{
							if (array_names_members[p] == "Метла")
							{
								point_error = 1;
								std::cout << std::endl << "Метла уже зарегистрирована!" << std::endl << std::endl;
								break;
							}
						}
					}
					if (point_error == 1)
					{
						point_error = 0;
						continue;
					}
					i++;
					if (i == 0)
					{
						array_names_members = new std::string[1];
						array_names_members[i] = "Метла";
					}
					if (i > 0)
					{
						array_names_members_1 = new std::string[i + 1]; 
						for (int j = 0; j < i; j++)
							array_names_members_1[j] = array_names_members[j];
						delete[] array_names_members;
						array_names_members = array_names_members_1;
						array_names_members[i] = "Метла";
					}
					if (i == 0)
					{
						array_time_members = new double[1];
						array_time_members[i] = broom.total_time(distance);
					}
					if (i > 0)
					{
						array_time_members_1 = new double[i + 1];
						for (int j = 0; j < i; j++)
							array_time_members_1[j] = array_time_members[j];
						delete[] array_time_members;
						array_time_members = array_time_members_1;
						array_time_members[i] = broom.total_time(distance);
					}
					std::cout << "Метла успешно зарегистрирована!" << std::endl;
					std::cout << std::endl;
				}


				if (k == 3) //ВЕРБЛЮД
				{
					if (i != -1)
					{
						for (int p = 0; p <= i; p++)
						{
							if (array_names_members[p] == "Верблюд")
							{
								point_error = 1;
								std::cout << std::endl << "Верблюд уже зарегистрирован!" << std::endl << std::endl;
								break;
							}
						}
					}
					if (point_error == 1)
					{
						point_error = 0;
						continue;
					}
					i++;
					if (i == 0)
					{
						array_names_members = new std::string[1];
						array_names_members[i] = "Верблюд";
					}
					if (i > 0)
					{
						array_names_members_1 = new std::string[i + 1];
						for (int j = 0; j < i; j++)
							array_names_members_1[j] = array_names_members[j];
						delete[] array_names_members;
						array_names_members = array_names_members_1;
						array_names_members[i] = "Верблюд";
					}
					if (i == 0)
					{
						array_time_members = new double[1];
						array_time_members[i] = camel.total_time(distance);
					}
					if (i > 0)
					{
						array_time_members_1 = new double[i + 1];
						for (int j = 0; j < i; j++)
							array_time_members_1[j] = array_time_members[j];
						delete[] array_time_members;
						array_time_members = array_time_members_1;
						array_time_members[i] = camel.total_time(distance);
					}
					std::cout << "Верблюд успешно зарегистрирован!" << std::endl;
					std::cout << std::endl;
				}


				if (k == 4) //КЕНТАВР
				{
					if (i != -1)
					{
						for (int p = 0; p <= i; p++)
						{
							if (array_names_members[p] == "Кентавр")
							{
								point_error = 1;
								std::cout << std::endl << "Кентавр уже зарегистрирован!" << std::endl << std::endl;
								break;
							}
						}
					}
					if (point_error == 1)
					{
						point_error = 0;
						continue;
					}
					i++;
					if (i == 0)
					{
						array_names_members = new std::string[1];
						array_names_members[i] = "Кентавр";
					}
					if (i > 0)
					{
						array_names_members_1 = new std::string[i + 1];
						for (int j = 0; j < i; j++)
							array_names_members_1[j] = array_names_members[j];
						delete[] array_names_members;
						array_names_members = array_names_members_1;
						array_names_members[i] = "Кентавр";
					}
					if (i == 0)
					{
						array_time_members = new double[1];
						array_time_members[i] = centaur.total_time(distance);
					}
					if (i > 0)
					{
						array_time_members_1 = new double[i + 1];
						for (int j = 0; j < i; j++)
							array_time_members_1[j] = array_time_members[j];
						delete[] array_time_members;
						array_time_members = array_time_members_1;
						array_time_members[i] = centaur.total_time(distance);
					}
					std::cout << "Кентавр успешно зарегистрирован!" << std::endl;
					std::cout << std::endl;
				}


				if (k == 5) //ОРЁЛ
				{
					if (i != -1)
					{
						for (int p = 0; p <= i; p++)
						{
							if (array_names_members[p] == "Орел")
							{
								point_error = 1;
								std::cout << std::endl << "Орел уже зарегистрирован!" << std::endl << std::endl;
								break;
							}
						}
					}
					if (point_error == 1)
					{
						point_error = 0;
						continue;
					}
					i++;
					if (i == 0)
					{
						array_names_members = new std::string[1];
						array_names_members[i] = "Орел";
					}
					if (i > 0)
					{
						array_names_members_1 = new std::string[i + 1];
						for (int j = 0; j < i; j++)
							array_names_members_1[j] = array_names_members[j];
						delete[] array_names_members;
						array_names_members = array_names_members_1;
						array_names_members[i] = "Орел";
					}
					if (i == 0)
					{
						array_time_members = new double[1];
						array_time_members[i] = eagle.total_time(distance);
					}
					if (i > 0)
					{
						array_time_members_1 = new double[i + 1];
						for (int j = 0; j < i; j++)
							array_time_members_1[j] = array_time_members[j];
						delete[] array_time_members;
						array_time_members = array_time_members_1;
						array_time_members[i] = eagle.total_time(distance);
					}
					std::cout << "Орёл успешно зарегистрирован!" << std::endl;
					std::cout << std::endl;
				}


				if (k == 6) //ВЕРБЛЮД-БЫСТРОХОД
				{
					if (i != -1)
					{
						for (int p = 0; p <= i; p++)
						{
							if (array_names_members[p] == "Верблюд-быстроход")
							{
								point_error = 1;
								std::cout << std::endl << "Верблюд-быстроход уже зарегистрирован!" << std::endl << std::endl;
								break;
							}
						}
					}
					if (point_error == 1)
					{
						point_error = 0;
						continue;
					}
					i++;
					if (i == 0)
					{
						array_names_members = new std::string[1];
						array_names_members[i] = "Верблюд-быстроход";
					}
					if (i > 0)
					{
						array_names_members_1 = new std::string[i + 1];
						for (int j = 0; j < i; j++)
							array_names_members_1[j] = array_names_members[j];
						delete[] array_names_members;
						array_names_members = array_names_members_1;
						array_names_members[i] = "Верблюд-быстроход";
					}
					if (i == 0)
					{
						array_time_members = new double[1];
						array_time_members[i] = speed_camel.total_time(distance);
					}
					if (i > 0)
					{
						array_time_members_1 = new double[i + 1];
						for (int j = 0; j < i; j++)
							array_time_members_1[j] = array_time_members[j];
						delete[] array_time_members;
						array_time_members = array_time_members_1;
						array_time_members[i] = speed_camel.total_time(distance);
					}
					std::cout << "Верблюд-быстроход успешно зарегистрирован!" << std::endl;
					std::cout << std::endl;
				}


				if (k == 7) //КОВЁР-САМОЛЕТ
				{
					if (i != -1)
					{
						for (int p = 0; p <= i; p++)
						{
							if (array_names_members[p] == "Ковёр-самолет")
							{
								point_error = 1;
								std::cout << std::endl << "Ковёр-самолет уже зарегистрирован!" << std::endl << std::endl;
								break;
							}
						}
					}
					if (point_error == 1)
					{
						point_error = 0;
						continue;
					}
					i++;
					if (i == 0)
					{
						array_names_members = new std::string[1];
						array_names_members[i] = "Ковёр-самолет";
					}
					if (i > 0)
					{
						array_names_members_1 = new std::string[i + 1];
						for (int j = 0; j < i; j++)
							array_names_members_1[j] = array_names_members[j];
						delete[] array_names_members;
						array_names_members = array_names_members_1;
						array_names_members[i] = "Ковёр-самолет";
					}
					if (i == 0)
					{
						array_time_members = new double[1];
						array_time_members[i] = flying_carpet.total_time(distance);
					}
					if (i > 0)
					{
						array_time_members_1 = new double[i + 1];
						for (int j = 0; j < i; j++)
							array_time_members_1[j] = array_time_members[j];
						delete[] array_time_members;
						array_time_members = array_time_members_1;
						array_time_members[i] = flying_carpet.total_time(distance);
					}
					std::cout << "Ковёр-самолет успешно зарегистрирован!" << std::endl;
					std::cout << std::endl;
				}
			}
			break; //ЗАКАНЧИВАЕМ CASE 1
		}
		case 2: //сортируем по результатам
		{
			k = -1; //В CASE 2 попадаем, когда хотим начать гонку и после выходим в меню: 1. Провести еще одну гонку  2. Выйти
			for (int j = 0; j < i; j++)
			{
				for (int p = 0; p < i; p++)
				{
					if (array_time_members[p] >= array_time_members[p + 1])
					{
						w = array_time_members[p];
						s = array_names_members[p];
						array_time_members[p] = array_time_members[p + 1];
						array_names_members[p] = array_names_members[p + 1];
						array_time_members[p + 1] = w;
						array_names_members[p + 1] = s;
					}
				}
			} 
			std::cout << std::endl;
			std::cout << "Результаты гонки: " << std::endl;
			for (int j = 0; j <= i; j++)
			{
				std::cout << y << ". " << array_names_members[j] << ". Время: " << array_time_members[j] << std::endl;
				y++;
			}
			break;
		}
		}
		if (k == 0)
			continue;
		else
			i = -1;
		std::cout << std::endl;
		std::cout << "1. Провести еще одну гонку" << std::endl;
		std::cout << "2. Выйти" << std::endl;
		std::cout << "Выберите действие: ";
		std::cin >> t;
	}
	return 0;
}
