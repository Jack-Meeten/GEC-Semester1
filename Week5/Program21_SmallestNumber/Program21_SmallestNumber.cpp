#include <iostream>

using namespace std;

int main()
{
    int inputs[10];

	for (int i = 0; i < sizeof(inputs) / sizeof(inputs[0]); i++)
	{
		cout << "Enter Number " << i + 1 << " = ";
		cin >> inputs[i];
	}
	
	int smallest = inputs[0];
	int smallestPos = 0;

	for (int i = 0; i < 10; i++)
	{
		if (inputs[i] < smallest)
		{
			smallest = inputs[i];
			smallestPos = i;
		}
	}
	cout << "Smallest Number : " << smallest << "\nPosition in Array : " << smallestPos + 1;

	return 0;
}