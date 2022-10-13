#include <iostream>
using namespace std;

int main()
{
    int input;

    cout << "Please choose difficulty" << "\n"
        << "1.	I'm too young to die! " << "\n"
        << "2.	Hey, not to rough! " << "\n"
        << "3.	Hurt me plenty." << "\n"
        << "4.	Ultra-Violence." << "\n"
        << "5.	Nightmare" << "\n"
        << "Please Enter 1, 2, 3, 4, 5" << "\n";

    cin >> input;

    switch (input)
    {
    case 1:
        cout << "Just plain boring..." << "\n";
        break;
    case 2:
        cout << "Little Princess Mode" << "\n";
        break;
    case 3:
        cout << "Ok next step is Nightmare go on..." << "\n";
        break;
    case 4:
        cout << "Dark Souls levels of difficulty loading..." << "\n";
        break;
    case 5:
        cout << "Enjoy!" << "\n";
        break;
    default:
        cout << "That is not a difficulty so heres Nightmare as a punishment, have fun" << "\n";
        break;
    }
}
