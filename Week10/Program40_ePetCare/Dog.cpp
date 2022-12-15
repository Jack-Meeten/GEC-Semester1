#include<iostream>
#include "Dog.h"
void Dog::Talk()
{
	std::cout << "I am dog and I am ";

	int mood = Pet::GetMood();
	if (mood > 15)
	{
		std::cout << "madzn";
	}
	else if (mood > 10)
	{
		std::cout << "Frustrated\n";
	}
	else if (mood > 5)
	{
		std::cout << "Okay\n";
	}
	else
	{
		std::cout << "Happy\n";
	}
	Pet::PassingTime();
	std::cout << "\n";
};