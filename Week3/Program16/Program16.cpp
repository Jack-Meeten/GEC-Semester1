#include <iostream>
using namespace std;

int main()
{
    int playerLife = 100;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Player health remianing : " << playerLife << "\n";
        cout << "\n";

        if (playerLife > 0)
        {
            int damage;

            cout << "Question " << i << " : How much damage shall I deal?\n";

            cin >> damage;
            playerLife -= damage;

            cout << "\n";
        }
        else
        {
            cout << "Early end. Player Died!\n";
            return 0;
        }
    }
    cout << "All questions asked. Player Survived!\n";
    return 0;
}