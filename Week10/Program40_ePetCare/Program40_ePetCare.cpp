#include <iostream>
#include"Pet.h"
#include"Dog.h"
#include"Cat.h"
#include"Hamster.h"
using namespace std;

int main()
{
	Pet* pPet{};

	int choice;

	cout << "Pick a new pet!\n";
	cout << "1 . Dog\n";
	cout << "2 . Cat\n";
	cout << "3 . Hamster\n";

	cin >> choice;

	switch (choice)
	{
	case 1:
		pPet = new Dog();
		break;
	case 2:
		pPet = new Cat();
		break;
	case 3:
		pPet = new Hamster();
		break;
	default:
		break;
	}
	pPet->Talk();

	while (true)
	{
		cout << "0 - Quit\n";
		cout << "1 - listen to your pet\n";
		cout << "2 - Feed your pet\n";
		cout << "3 - Play with your pet\n";

		cin >> choice;
		if (choice == 0)
		{
			return 0;
		}
		else if (choice == 1)
		{
			pPet->Talk();
		}
		else if (choice == 2)
		{
			pPet->Feed();
		}
		else if (choice == 3)
		{
			pPet->Play();
		}
		else
		{
			continue;
		}
	}
}