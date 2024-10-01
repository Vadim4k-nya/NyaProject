#include <iostream>
#include <Windows.h>
#include <cstdlib>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int arr[20]{};

	for (int i = 0; i < 20; i++)
	{
		arr[i] = rand() % 6 + 5;
		std::cout << arr[i] << " ";
		if (i == 10)
		{
			std::cout << '\n';
		}
	}

	

}
