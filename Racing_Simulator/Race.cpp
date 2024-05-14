#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include "DinLib.h"

using namespace std;
int main()
{
	system("color 4");

	int f = 0;
	cout << "					Добро пожаловть в гоночный симулятор! " << endl <<
		"					_____________________________________ ";


	while (f != 2)
	{
		int x = 0, ii = 1, b = 0, sum = 0;
		int num_type_race = 0;
		string mnum_type_race[4] = { "0", "Гонка для наземного транспорта ", "Гонка для воздушного транспорта ", "Гонка для наземного и воздушного транспорта " };

		int long_distance = 0;
		int mass[8]{};
		string mtransports[8] = { "0", "Ботинки-вездеходы", "Верблюд-бысроход", "Верблюд", "Кентавр", "Метла", "Орёл", "Ковер-самолёт" };
		string mas[8] = { "0","1","2","3","4","5","6","7" };

		double mtime[8] = {};


		do
		{
			cout << endl << endl << " 1. " << mnum_type_race[1] << '\f'
				<< " 2. " << mnum_type_race[2] << '\f'
				<< " 3. " << mnum_type_race[3] << '\f' << '\f' <<
				"___________________________________________________ \n" <<
				" Выберете тип гонки(1, 2, 3): \n" <<
				"--------------------------------------------------- \n" <<
				"=> ";
			cin >> num_type_race;
		} while (num_type_race == 0 || num_type_race > 3);

		do
		{
			cout << "___________________________________________________ \n";
			cout << "Укажите длинну дистанции(должна быть положительной): \n";
			cout << "--------------------------------------------------- \n" <<
				"=> ";
			cin >> long_distance;
		} while (long_distance <= 0);



		do 
		{
			do 
			{
				cout << "___________________________________________________ \n";
				cout << "Выберите действие: \n \n"
					<< "1. Зарегистрировать транспорт"
					<< endl << "2. Начать гонку \n" <<
					"--------------------------------------------------- \n" <<
					"=> ";
				cin >> x;
				if (ii < 2 && x == 2)
				{
					cout << "___________________________________________________ \n" <<
					 "ДОЛЖНО БЫТЬ ЗАРЕГИСТРИРОВАНО МИНИМУМ 2 ТРАНСПОРТНЫХ СРЕДСТВА: ";
				}



			} while (x < 1 || x > 2);

			if (x == 1)
			{
				do {
					cout << "___________________________________________________" << endl;
					cout << endl << mnum_type_race[num_type_race] << "| РАССТОЯНИЕ: " << long_distance;
					if (ii == 1)
					{

					}
					else
					{
						cout << endl << endl << "ЗАРЕГИСТРИРОВАННЫ : ";

						for (int i = 1; i < ii; ++i)
						{
							cout << mas[i] << " | ";
						}

					}

					cout << endl << endl << "ДОСТУПНЫЙ ТРАНСПОРТ: " << endl <<
						"1. " << mtransports[1] << endl <<
						"2. " << mtransports[2] << endl <<
						"3. " << mtransports[3] << endl <<
						"4. " << mtransports[4] << endl <<
						"5. " << mtransports[5] << endl <<
						"6. " << mtransports[6] << endl <<
						"7. " << mtransports[7] << endl <<
						"0. Закончить регистрацию" << endl << endl <<
						"___________________________________________________ \n"
						<< "Выберите транспорт или 0 для окончания регистрации: \n" <<
						"--------------------------------------------------- \n" <<
						"=> ";

					cin >> b;



					if (b == 0)
					{
						break;
					}
					else if (b > 7 || b < 0)
					{
						continue;
					}

					else if (num_type_race == 1)
					{
						if (b > 0 && b < 5)
						{
							for (int i = 0; i < 8; ++i)
							{
								if (mas[i] == mtransports[b])
								{
									cout << "___________________________________________________ \n"
										<< endl << "	!!!ДАННЫЙ ТРАНСПОРТ УЖЕ ЗАРЕГИСТРИРОВАН!!! " << endl;
									i = 15;
									b = 15;
									continue;
								}
							}

							if (b != 15)
							{
								mass[ii] = b;
								mas[ii] = mtransports[b];
								++ii;
							}
						}

						else
						{
							cout << "Данный транспорт не подходит для этой трассы! " << endl;
							continue;
						}
					}

					else if (num_type_race == 2) {
						if (b > 4 && b < 8) {

							for (int i = 0; i < 10; ++i) {

								if (mas[i] == mtransports[b]) {
									std::cout << "\nДанный транспорт уже зарегистрирован";
									i = 15;
									b = 15;
									break;
								}
							}

							if (b != 15) {
								mass[ii] = b;
								mas[ii] = mtransports[b];
								++ii;
							}
						}

						else {
							std::cout << "\nДанный тип транспорта не подходит для данной трассы!";
							continue;
						}
					}

					else {

						for (int i = 1; i < 10; ++i) {
							if (mas[i] == mtransports[b]) {

								std::cout << "\nДанный транспорт уже зарегистрирован";
								i = 15;
								b = 15;
								continue;
							}

						}

						if (b != 15) {

							mass[ii] = b;
							mas[ii] = mtransports[b];
							++ii;
						}
					}


				} while (b != 0);
			}


		} while (x == 1);

		for (int i = 1; i < 10; ++i) {
			if (mass[i] == 3) 
			{
				DinLib::camel f3;
				mtime[i] = f3.function_camel(long_distance);
				++sum;
			}

			else if (mass[i] == 2)
			{
				DinLib::fast_camel f2;
				mtime[i] = f2.function_fast_camel(long_distance);
				++sum;
			}

			else if (mass[i] == 4)
			{
				DinLib::centaur f4;
				mtime[i] = f4.function_centaur(long_distance);
				++sum;
			}

			else if (mass[i] == 1)
			{
				DinLib::boots_rover f1;
				mtime[i] = f1.function_boots_rover(long_distance);
				++sum;
			}

			else if (mass[i] == 7)
			{
				DinLib::flying_carpet f7;
				mtime[i] = f7.function_flying_carpet(long_distance);
				++sum;
			}

			else if (mass[i] == 6)
			{
				DinLib::eagle f6;
				mtime[i] = f6.function_eagle(long_distance);
				++sum;
			}
			else if (mass[i] == 5)
			{
				DinLib::broomstick f5;
				mtime[i] = f5.function_broomstick(long_distance);
				++sum;
			}

		}

		for (int i = 1; i < sum; ++i) 
		{ 
			for (int j = 1; j < sum; ++j) 
			{
				if (mtime[j] > mtime[j + 1]) 
				{
					double tmp = mtime[j];
					mtime[j] = mtime[j + 1];
					mtime[j + 1] = tmp;

					string tmp2 = mas[j];
					mas[j] = mas[j + 1];
					mas[j + 1] = tmp2;
				}

			}

		}



		std::cout << "\n\tРезультат гонки: ";
		for (int i = 1; i < sum + 1; ++i) {
			std::cout << "\n\t" << i << ". " << mas[i] << ". Время: " << mtime[i];

		}


		std::cout << "\n\n1. Провести ещё одну гонку\n2. Выйти\nВыберите действие:";
		std::cin >> f;

	}

	system("pause");
}