//#include <iostream>
//#include <Windows.h>
//
//int main() {
//	
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	std::cout << "\n#################\n### Задание 1 ###\n\n";
//	
//	float distance = 0, time = 0, speed = 0;
//
//	std::cout << "Введите расояние(км): ";
//	std::cin >> distance;
//	std::cout << "Введитте время(ч): ";
//	std::cin >> time;
//	speed = distance / time;
//	std::cout << "Вам нужно двигаься со скоростью: " << speed << "км/ч";
//
//	std::cout << "\n#################\n### Задание 2 ###\n\n";
//
//	float start_h = 0, start_m = 0, start_s = 0;
//	float finish_h = 0, finish_m = 0, finish_s = 0;
//	float trip_price = 0;
//
//	std::cout << "Введите время начала в фрмате ч.м.с: ";
//	std::cin >> start_h, start_m, start_s;
//	std::cout << "Введите время завершения в фрмате ч.м.с: ";
//	std::cin >> finish_h, finish_m, finish_s;
//	
//	float total_min = (finish_h - start_h) * 60 + (finish_m - start_m) + (finish_s - start_s) / 60;
//	float trip_price = total_min * 2;
//
//	std::cout << "Вы должны заплатить: " << trip_price << "гривны";
//
//}
