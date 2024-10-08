#include <iostream>
#include <Windows.h>
#include <cstdlib>

void MaxAndMinElement(int arr[], int sizeArr) 
{
	int max = 5, indexMax{}, min = 5, indexMin{};
	for (int i = 0; i < sizeArr; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			indexMax = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			indexMin = i;
		}
	}
	std::cout << max << "[" << indexMax << "]\n"
		<< min << "[" << indexMin << "]\n";
}


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int sizeArr = 10;
	int arr[sizeArr]{};

	for (int i = 0; i < sizeArr; i++)
	{
		arr[i] = rand() % 10 + 1;
	}

	MaxAndMinElement(arr, sizeArr);
	
	return 0;

}
