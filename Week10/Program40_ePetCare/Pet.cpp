#include "Pet.h"
#include <iostream>
using namespace std;
Pet::Pet(int Hunger, int Boredom)
{ 
	cout << "A new pet has arrived\n";
	m_hunger = Hunger;
	m_bored = Boredom;
}
Pet::~Pet() {}
void Pet::Feed(int food)
{
	cout << "Nom Nom\n";
	m_hunger -= food;
	if (m_hunger < 0)
	{
		m_hunger = 0;
	}
	PassingTime();
}
void Pet::Play(int fun)
{
	cout << "Fun I have\n";
	m_bored -= fun;
	if (m_bored < 0)
	{
		m_bored = 0;
	}
	PassingTime();
}
void Pet::Talk()
{
	cout << "I am your pet and I feel\n";
	int mood = GetMood();
	if (mood > 15)
	{
		cout << "madzn";
	}
	else if (mood > 10)
	{
		cout << "Frustrated\n";
	}
	else if (mood > 5)
	{
		cout << "Okay\n";
	}
	else
	{
		cout << "Happy\n";
	}
	PassingTime();
}
void Pet::PassingTime(int time)
{
	m_hunger += time;
	m_bored += time;
}