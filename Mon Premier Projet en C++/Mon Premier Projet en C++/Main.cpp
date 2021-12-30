//Mon Premier Projet en C++ by Samlegamer

#include <iostream>
#include <string>
#include <list>

void calculatrice();
void enumExample();

class Item
{
	public : class Properties
	{
		public: std::string str;

	public :void Name(std::string a)
		{
			this->str = a;
		}

	public:void Food(int amount, int saturation, bool isWolfMeat) {}
		
	public:void Maxstack(int max) {}
		
	public: void get(std::string str)
		{
				std::cout << "Item : " << str << " has created !" << std::endl;
		}
	};
};


int main()
{
	

	std::cin.ignore();
}

void calculatrice()
{
	double number1 = 0;
	double number2 = 0;
	char signe{};
	double result = 0;

	std::cin >> number1 >> signe >> number2;
	std::cin.ignore();

	switch (signe)
	{
	case 'x':
		result = number1 * number2;
		break;

	case '-':
		result = number1 - number2;
		break;

	case '+':
		result = number1 + number2;
		break;

	case '/':
		result = number1 / number2;
		break;
	}

	std::cout << "Le resultat de ce calcul est : " << result << std::endl;
}

void enumExample()
{
	enum Fruits { BANANE, FRAISE, POMME, POIRE };

	const char* str[] = { "Banane", "Fraise", "Pomme", "Poire" };

	std::cout << "Liste de Fruit :" << std::endl;
	std::cout << Fruits::BANANE << " : " << str[0] << std::endl;
	std::cout << Fruits::FRAISE << " : " << str[1] << std::endl;
	std::cout << Fruits::POMME << " : " << str[2] << std::endl;
	std::cout << Fruits::POIRE << " : " << str[3] << std::endl;

	std::cout << "Entrez le nombre d'un article -> ";

	std::string message = "Le fruit choisi est : ";

	int input = 0;

	std::cin >> input;
	std::cin.ignore();

	switch (input)
	{
	case Fruits::BANANE:
		std::cout << message << str[0];
		break;
	case Fruits::FRAISE:
		std::cout << message << str[1];
		break;
	case Fruits::POMME:
		std::cout << message << str[2];
		break;
	case Fruits::POIRE:
		std::cout << message << str[3];
		break;

	default:
		std::cout << "Le nombre choisi ne correspond a aucun article !" << std::endl;
			break;
	}
}