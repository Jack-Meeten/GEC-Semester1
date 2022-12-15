#include <iostream>
using namespace std;

void inputDetails(int* n1, int* n2);
void outputDetails(int& integer1, int& interger2, int* pointer);

int main()
{
    int num1;
    int num2;
    int* pNum = &num1;

    inputDetails(&num1, &num2);

    cout << "pNum pointed at num1 \n";
    outputDetails(num1, num2, pNum);

    cout << "\n";
    pNum = &num2;
    cout << "Pointing pNum at num2 \n";

    outputDetails(num1, num2, pNum);
    pNum = NULL;
}
void inputDetails(int* n1, int* n2)
{
    int input;

    cout << "Enter int 1 : \n";
    cin >> input;
    *n1 = input;

    cout << "Enter int 2 : \n";
    cin >> input;
    *n2 = input;
}
void outputDetails(int& integer1, int& integer2, int* pointer)
{
    cout << "num1 value = " << integer1 << "\n";
    cout << "num1 address = " << &integer1 << "\n";
    cout << "num2 value = " << integer2 << "\n";
    cout << "num2 address = " << &integer2 << "\n";
    cout << "pNum value = " << pointer << "\n";
    cout << "pNum dereferenced value = " << *pointer << "\n";//dereferenced
    cout << "pNum address = " << &pointer << "\n";
}