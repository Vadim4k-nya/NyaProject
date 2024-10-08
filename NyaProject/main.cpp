#include <iostream>
#include <Windows.h>
#include <cstdlib>

// написаь калькул€ро но вс выкслни€ в отдльных функци€х +-*/ и % от числа

float Plus(float num1, float num2) 
{
	
	return num1 + num2;
}
float Minus(float num1, float num2) 
{
	return num1 - num2;
}
float Multiply(float num1, float num2) 
{
	return num1 * num2;
}
float Divide(float num1, float num2) 
{
	return num1 / num2;
}
float Percentage(float num1, float num2) 
{
	return num2 * num1/100;
}


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	float num1 = 0, num2 = 0, result = 0;
	char action = 0;

	std::cout << "¬ведите выражние: ";
	std::cin >> num1;
	std::cin >> action; 
	std::cin >> num2;
	
	if (action == '+')
	{
		result = Plus(num1, num2);
	}
	else if (action == '-')
	{
		result = Minus(num1, num2);
	}
	else if (action == '*')
	{
		result = Multiply(num1, num2);
	}
	else if (action == '/' && num2 != 0)
	{
		result = Divide(num1, num2);
	}
	else if (action == '%')
	{
		result = Percentage(num1, num2);
	}
	else
	{
		std::cout << "ќшбк";
		return 0;
	}

	std::cout << "= " << result;

	return 0;

}
