#include <iostream>
#include <Windows.h>
#include <cstdlib>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int size = 10;
	int arr1[size]{}, arr2[size]{}, couner = 0;

	for (int i = 0; i < size; i++)
	{
		arr1[i] = rand() % 6 + 5;
		std::cout << "������ ����� �� 0 �� 10: ";
		std::cin >> arr2[i];
		if (arr2[i] >= 0 && arr2[i] <= 10) 
		{
			if (arr1[i] == arr2[i])
			{
				std::cout << "������:)\n";
				couner++;
			} 
			else 
			{
				std::cout << "�� ������:(\n";
			}
		}
		else 
		{
			std::cout << "���! ������ ���!!!\n\n";
		}
	}
	std::cout << "\t����: " << couner;
}
