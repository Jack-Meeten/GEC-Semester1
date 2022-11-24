#include <iostream>
#include <string>

using namespace std;

void comma2blank(char* textToChange);

int main()
{
    char textToEnter[256];

    char* pTextToEnter = &textToEnter[0];

    cout << "Enter a scentence with spaces and commas : \n";
    cin.getline(textToEnter, 256);
    
    for (int i = 0; i < size(textToEnter); i++)
    {
        if (textToEnter[i] == ',')
        {
            comma2blank(&pTextToEnter[i]);
        }
    }
    
    cout << textToEnter;
}

void comma2blank(char* textToChange)
{
    *textToChange = ' ';
}