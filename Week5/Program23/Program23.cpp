#include <iostream>

using namespace std;

void PrintInventory(string inventory[], int max);

int main()
{
    const int maxItems = 4;
    int numItems;
    string inventory[maxItems]
    {
        "Sword",
        "Battle axe",
        "Healing potion",
        "Dagger"
    };

    char playerInput;

    PrintInventory(inventory, maxItems);
    cout << "\n";

    cout << "You have picked up a wizards staff, woyuld you like to swap your dagger for it? y or n?\n";
    cin >> playerInput;

    if (playerInput == 'y' || playerInput == 'Y')
    {
        inventory[3] = "Wizard Staff";
    }
    else
    {
        cout << "You have left the staff behind\n";
    }

    PrintInventory(inventory, maxItems);
}

void PrintInventory(string inventory[], int max)
{
    cout << "Inventory Content :\n";
    for (int i = 0; i < max; i++)
    {
        cout << inventory[i] << "\n";
    }
}