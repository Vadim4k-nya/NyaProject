#include <iostream>
#include <Windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double rate_usd = 0.011, rate_cny = 0.076, rate_frt = 0.037, rate_jpy = 1.55;
	double rub = 0, usd = 0, cny = 0, frt = 0, jpy = 0; 

	int resset = 1;
	do
	{
		std::cout << "\nВвдите сколь рублей хотите конвертировать: ";
		std::cin >> rub;

		std::cout << "\nВыберите валюту: "
			<< "\n1) Доллар " << rub * rate_usd + 5 / 100
			<< "\n2) Юань " << rub * rate_cny + 5 / 100
			<< "\n3) Фарит " << rub * rate_frt + 5 / 100
			<< "\n4) Йен " << rub * rate_jpy + 5 / 100
			<< "\n> ";
		int choice = 0;
		std::cin >> choice;

		if (choice == 1)
		{
			usd += rub * rate_usd - rub * rate_usd * (5 / 100);
		}
		else if (choice == 2)
		{
			cny += rub * rate_cny - rub * rate_cny * (5 / 100);
		}
		else if (choice == 3)
		{
			frt += rub * rate_frt - rub * rate_frt * (5 / 100);
		}
		else if (choice == 4)
		{
			jpy += rub * rate_jpy - rub * rate_jpy * (5 / 100);
		}
		else
		{
			std::cout << "Ошибка: такого варианта ответа нет";
		}
		
		std::cout << "\nХотите ещё что-то?\n1) Да\n0) Нет\n> ";
		std::cin >> resset;
	} while (resset == 1);

	std::cout << "\n\nИтог: \n" << usd << " долларов\n" << cny << " юаней\n" << frt << " фаритов\n" << jpy << " йен\n";

}