
#include <iostream>
#include <string>
#include "MoyenneInit.hpp"

void init()
{
	std::cout << "Combien de notes voulez vous rentrez ?" << std::endl;
	double numberNotes = 0;
	std::cin >> numberNotes;
	std::cin.ignore();
	std::cout << "Le nombre de notes que vous pouvez rentrez est : " << numberNotes << std::endl;
	double somme = 0;

	for (int i = 1; i <= numberNotes; ++i)
	{
		double notes = 0;

		std::cin >> notes;
		std::cin.ignore();

		somme = somme + notes;

	}

	double division = somme / numberNotes;
	std::cout << "Votre moyenne est de : " << division << std::endl;

	std::cin.ignore();
}