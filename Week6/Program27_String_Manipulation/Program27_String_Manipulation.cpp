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

    int xIndex = stringToChange.find("XX");
    stringToChange.insert(xIndex + 1, userName);
    cout << stringToChange << "\n";

    stringToChange.erase(xIndex, 1);
    stringToChange.erase(xIndex + userName.length(), 1);
    cout << stringToChange << "\n";

    cout << "Enter a second name longer than the first : \n";

    cin >> secondUserName;

    secondUserName = secondUserName.erase(secondUserName.find(' '));
    string firstFirstName = userName.erase(userName.find(' '));

    if (secondUserName.length() > firstFirstName.length())
    {
        stringToChange.replace(xIndex, firstFirstName.length(), secondUserName);
        cout << stringToChange;
    }
}
