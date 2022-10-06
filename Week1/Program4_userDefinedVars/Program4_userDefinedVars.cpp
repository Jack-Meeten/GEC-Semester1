#include <iostream>

int main()
{
	typedef int health;

	enum Weapons
	{
		SWORD = 1,
		DAGGER,
		MACE,
		TWIN_SWORD,
		SAMURAI,
		WIZARD_STAFF,
		FIRE_POTION,
		ICE_BLADE,
		SMALL_KNIFE
	};

	health _health = 13000;
	Weapons samurai = SAMURAI;

	std::cout << " My current health is : " << _health << "\n";
	std::cout << " And the ID of my weapon of choice is : " << samurai << "\n";
}

