#include <iostream>
#include "CHildClass.h"

int main()
{
	cout << "\nCreating child class on heap\n";
	CHildClass* pChild = new CHildClass();

	cout << "Deleting child class from heap\n";
	delete pChild;

	cout << "\n Creating child class on stack\n";
	CHildClass child;//no params so no brackets

	cin.get();

	cout << "\nExisting program - stack will be cleared\n";

	return 0;
}
