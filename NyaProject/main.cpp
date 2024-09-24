#include <iostream>
#include <Windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float sum = 0, num = 1;

	while (num != 0)
	{
		std::cout << "¬ведите число: ";
		std::cin >> num;
		sum += num;
	}

	std::cout << "—умма: " << sum;


}