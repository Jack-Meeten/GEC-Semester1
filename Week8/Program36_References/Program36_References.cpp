#include <iostream>

using namespace std;

void add25(int& input);
void subtract25(int& input);

int main()
{
    int num;
    int& rNum = num;

    cout << "Enter a number : \n";
    cin >> rNum;
    cout << "Num = " << num << "\n";
    add25(rNum);
    cout << "Num = " << num << "\n";

    cout << "Enter a number : \n";
    cin >> rNum;
    cout << "Num = " << num << "\n";
    subtract25(rNum);
    cout << "Num = " << num << "\n";
}

void add25(int& input)
{
    input += 25;
}
void subtract25(int& input)
{
    input -= 25;
}