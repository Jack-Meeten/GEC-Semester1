#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

void CheckInventory(vector<string> invnetory);

int main()
{
	string items[] = { "Fire Spell", "Sword", "Knife", "Staff", "Healing Potion"};

    vector<string> inventory;

    string currentInput;
	inventory.push_back("Moonlight Greatsword");

	while (size(inventory) < 3)
	{
		string itemOne = items[rand() % 4];
		string itemTwo = items[rand() % 4];

		cout << "Would you like a " << itemOne << " or a ";

		bool itemsEqual = true;

		while (itemsEqual)
		{
			if (itemTwo != itemOne)
			{
				cout << itemTwo << "\n";
				itemsEqual = false;
			}
			else
			{
				itemTwo = items[rand() % 4];
			}
		}
		
		getline(cin, currentInput);
		inventory.push_back(currentInput);

		CheckInventory(inventory);
	}

	int intInput;

	cout << "You have found a Estus Shard, what in your inventory would you like to replace it with?\n" << "Choices :\n";
	CheckInventory(inventory);
	cin >> intInput;

	inventory[intInput - 1] = "Estus Shard";
	CheckInventory(inventory);

	cout << "You have been robbed!";
	inventory.clear();
	CheckInventory(inventory);
}

void CheckInventory(vector<string> inventory)
{
	if (empty(inventory) == false)
	{
		cout << "\n";
		cout << "Your inventory includes : \n";
		for (int i = 0; i < size(inventory); i++)
		{
			cout << i + 1 << " : " << inventory[i] << "\n";
		}
		cout << "\n";
	}
	else
	{
		cout << "\n";
		cout << "Your inventory is empty! \n";
		cout << "\n";
	}
}