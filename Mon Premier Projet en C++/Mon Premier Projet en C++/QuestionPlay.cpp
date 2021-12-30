
#include <ctime>
#include <iostream>
#include "QuestionPlay.hpp"

void common();
void initDifficulty();

int max_try = 0;

void onPlay()
{
	initDifficulty();

	common();
	
	std::cin.ignore();
}

void initDifficulty()
{
	int easy = 1;
	int normal = 2;
	int hard = 3;

	int difficulty[]{ 0 , easy , normal , hard };

	int number = 0;

	std::cout << "Choisir le niveau de difficulte :" << std::endl;

	std::cout << easy << " : Facile -> 15 essaies" << std::endl;
	std::cout << normal << " : Normal -> 10 essaies" << std::endl;
	std::cout << hard << " : Difficile -> 6 essaies" << std::endl;

	std::cin >> number;
	
	if (number == easy)
	{
		std::cout << "Vous jouer actuellement en Facile";
		max_try = 15;
	}
	else if (number == normal)
	{
		std::cout << "Vous jouer actuellement en Normal";
		max_try = 10;
	}
	else if (number == hard)
	{
		std::cout << "Vous jouer actuellement en Difficile";
		max_try = 6;
	}
	else
	{
		std::cout << "Ce nombre n'a de difficulté" << std::endl;
	}
}

	void common()
	{
		std::srand(time(nullptr));

		int number_mystery = std::rand() % 100;

		for (int i = 0; i < max_try; ++i)
		{
			//std::cout << "Nombre d'essaie restant : " << max_try << std::endl;
			std::cout << " | Tapez un nombre entre 0 et 100 -> ";
			int number_user = 0;
			std::cin >> number_user;

			if (number_mystery == number_user)
			{
				std::cout << "------------------------" << std::endl;
				std::cout << "|c'est bon tu as gagne |" << std::endl;
				std::cout << "------------------------" << std::endl;

				break;
			}
			else if (number_user > number_mystery)
			{
				std::cout << "Trop Grand" << std::endl;
			}
			else
			{
				std::cout << "Trop petit" << std::endl;
			}

			if (i == max_try - 1)
			{
				std::cout << "PERDU !!!" << std::endl;
				std::cout << "Le nombre etait : " << number_mystery << std::endl;
			}
		}

		std::cin.ignore();
}