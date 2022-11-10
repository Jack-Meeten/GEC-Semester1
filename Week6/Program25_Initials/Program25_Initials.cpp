#include <iostream>
using namespace std;

int main()
{
    char initials[6];

    cout << "Enter your first, middle and last name initials, with a space inbetween each initial : \n";
    cin.getline(initials, 254);

    cout << "\n";

    for (int i = 0; i < size(initials); i++)
    {
        if (initials[i] != ' ')
        {
            cout << initials[i] << "\n";
        }
    }
}
