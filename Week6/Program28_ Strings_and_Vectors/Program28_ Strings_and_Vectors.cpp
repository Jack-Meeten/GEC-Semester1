#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

int main()
{
	string items[] = { "Fire Spell", "Sword", "Knife", "Staff" };

    vector<string> inventory;

    string currentInput;

	while (size(inventory) < 3)
	{
		string currentRand = items[rand() % 3];

		cout << "Would you like a " << currentRand;

		for (int i = 0; i < size(items); i++)
		{
			if (items[i] == currentRand)
			{
			}
		}
		cout << items[rand() % 3] << "\n";
		inventory.push_back("Sword");
	}
}