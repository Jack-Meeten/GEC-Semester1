#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;

    cout << "Enter a sentence : \n";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'e')
        {
            input[i] = 'x';
        }
    }

    cout << input;
}
