//#include <iostream>
//#include <Windows.h>
//
//int main() {
//	
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	std::cout << "\n#################\n### ������� 1 ###\n\n";
//	
//	float distance = 0, time = 0, speed = 0;
//
//	std::cout << "������� ��������(��): ";
//	std::cin >> distance;
//	std::cout << "�������� �����(�): ";
//	std::cin >> time;
//	speed = distance / time;
//	std::cout << "��� ����� �������� �� ���������: " << speed << "��/�";
//
//	std::cout << "\n#################\n### ������� 2 ###\n\n";
//
//	float start_h = 0, start_m = 0, start_s = 0;
//	float finish_h = 0, finish_m = 0, finish_s = 0;
//	float trip_price = 0;
//
//	std::cout << "������� ����� ������ � ������ �.�.�: ";
//	std::cin >> start_h, start_m, start_s;
//	std::cout << "������� ����� ���������� � ������ �.�.�: ";
//	std::cin >> finish_h, finish_m, finish_s;
//	
//	float total_min = (finish_h - start_h) * 60 + (finish_m - start_m) + (finish_s - start_s) / 60;
//	float trip_price = total_min * 2;
//
//	std::cout << "�� ������ ���������: " << trip_price << "������";
//
//}
