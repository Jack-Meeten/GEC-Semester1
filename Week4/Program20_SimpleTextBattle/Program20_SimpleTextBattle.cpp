#include <iostream>

using namespace std;

int playerHealth = 1000, enemyHealth = 2000;

bool play = true;

void Attack(int choice);
bool playerStateFunction();

int main()
{
	int playerChoice;
	while (play)
	{
		cout << "You have met a troll and can do three things, 1. Use a sword, 2. Use magic, 3. Use axe. They each have different effects.\n";
		cout << "Enter Choice : ";
		cin >> playerChoice;

		Attack(playerChoice);
		if (playerStateFunction()) play = true;
		else play = false;
	}
	return 0;
}

void Attack(int choice)
{
	const int swordDamage = 300;
	const int magicDamage = 650;
	const int axeDamage = 450;
	const int trollSwordDamage = 350;
	const int trollMagicDamage = 50;
	const int trollAxeDamage = 100;

	switch (choice)
	{
	case 1:
		enemyHealth -= swordDamage;
		playerHealth -= trollSwordDamage;
		cout << "You have hit the troll!\n";
		cout << "You have been hit!\n";
		if (playerHealth < 0)
		{
			playerHealth = 0;
		}
		if (enemyHealth < 0)
		{
			enemyHealth = 0;
		}
		cout << "Player health = " << playerHealth << "Enemy health = " << enemyHealth << "\n";

	case 2:
		enemyHealth -= magicDamage;
		playerHealth -= trollMagicDamage;
		cout << "You have hit the troll!\n";
		cout << "You have been hit!\n";
		if (playerHealth < 0)
		{
			playerHealth = 0;
		}
		if (enemyHealth < 0)
		{
			enemyHealth = 0;
		}
		cout << "Player health = " << playerHealth << "Enemy health = " << enemyHealth << "\n";

	case 3:
		enemyHealth -= axeDamage;
		playerHealth -= trollAxeDamage;
		cout << "You have hit the troll!\n";
		cout << "You have been hit!\n";
		if (playerHealth < 0)
		{
			playerHealth = 0;
		}
		if (enemyHealth < 0)
		{
			enemyHealth = 0;
		}
		cout << "Player health = " << playerHealth << "Enemy health = " << enemyHealth << "\n";

	default:
		break;
	}
}

bool playerStateFunction()
{
	char playAgain;

	if (enemyHealth <= 0)
	{
		cout << "You have killed the troll, do you want to player again y/n\n";
		cin >> playAgain;

		if (playAgain == 'y' || playAgain == 'Y')
		{
			playerHealth = 1000;
			enemyHealth = 2000;
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}