#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userName;
    string secondUserName;

    string stringToChange = "Do you know who absolutly loves c++ XX curtainly doesn't";

    cout << "Enter your first and last name : \n";

    getline(cin, userName);

    cout << "\n";

    int xIndex = stringToChange.find("XX");
    stringToChange.insert(xIndex + 1, userName);
    cout << stringToChange << "\n";

    cout << "\n";

    stringToChange.erase(xIndex, 1);
    stringToChange.erase(xIndex + userName.length(), 1);
    cout << stringToChange << "\n";

    cout << "\n";

    bool canTry = true;

    while (canTry)
    {
        cout << "Enter a second name longer than the first : \n";
        getline(cin, secondUserName);

        cout << "\n";

        string firstFirstName = userName;
        firstFirstName.erase(userName.find(' '));
        secondUserName.erase(secondUserName.find(' '));

        if (secondUserName.length() > firstFirstName.length())
        {
            stringToChange.replace(xIndex, firstFirstName.length(), secondUserName);
            cout << stringToChange;
            canTry = false;
        }
    }
}
