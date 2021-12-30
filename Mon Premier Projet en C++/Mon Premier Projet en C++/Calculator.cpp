
#include "Calculator.hpp"

#include <iostream>

void calculate()
{
	double number1 = 0;
	double number2 = 0;
	double result = 0;

	char multi = 'x';
	char divis = '/';
	char soust = '-';
	char addit = '+';

	char sign[] = { multi , divis , soust , addit };

	std::cin >> number1;

	if (number1 && multi && number2)
	{
		(result = number1 * number2);
	}
	if (number1 && sign[1] && number2)
	{
		result = number1 / number2;
	}
	if (number1 && sign[2] && number2)
	{
		result = number1 - number2;
	}
	if (number1 && sign[3] && number2)
	{
		result = number1 + number2;
	}
	std::cin >> sign;
	std::cin >> number2;

	std::cout << "Result -> " << result << std::endl;

	std::cin.ignore();
}