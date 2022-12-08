#include <iostream>
#include "Nannals.h"

using namespace std;

int main()
{
    Mammal* pMammal;
    int choice;

    cout << "1.Dog 2.Cat 3.Horse 4.Pig\n" << "Enter choice : ";
    cin >> choice;

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //created mammal, stored within a mammal pointer
    switch (choice)
    {
    case 1:
        pMammal = new Dog();
        break;
    case 2:
        pMammal = new Cat();
        break;
    case 3:
        pMammal = new Horse();
        break;
    case 4:
        pMammal = new Pig();
    default:
        pMammal = new Mammal();
        break;
    }

    pMammal->Speak();

    cin.get();
    return 0;
}
