#include <iostream>
#include <algorithm>

using namespace std;

void FindBiggest(int intArray[]);

int main()
{
    int ints[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Number " << i + 1 << " = ";
		cin >> ints[i];
	}

	FindBiggest(ints);

	sort(ints, ints + 5);

	cout << "Numbers in order " << " = \n";

	for (int i = 0; i < 5; i++)
	{
		cout << ints[i] << "\n";
	}

	sort(ints, ints + 5, greater<int>());
	cout << "Numbers backwards " << " = \n";

	for (int i = 0; i < 5; i++)
	{
		cout << ints[i] << "\n";
	}
}
void FindBiggest(int intArray[])
{
	int biggest = intArray[0];

	for (int i = 0; i < 10; i++)
	{
		if (intArray[i] > biggest)
		{
			biggest = intArray[i];
		}
	}

	int bigPos = distance(intArray, find(intArray, intArray + 5, biggest));

	cout << "Largest num : " << biggest << " at position : " << bigPos + 1 << "\n";
}