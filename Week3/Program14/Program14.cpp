#include <iostream>
using namespace std;

int main()
{
	int inputNum = 0;
	int total = 0;
	float mean = 0.0f;
	int numCount = 2;

	cout << "Enter number 1\n";
	cin >> inputNum;
	total += inputNum;

	cout << "\n";

	cout << "Enter number 2\n";
	cin >> inputNum;
	total += inputNum;

	mean = (float)total / numCount;

	cout << "\n";
	cout << "Amount of inputs = " << numCount << "\n";
	cout << "Mean of inputs = " << mean << "\n";

	do
	{
		cout << "\n";

		cout << "Enter Number\n";
		cin >> inputNum;

		if (inputNum != 0)
		{
			numCount++;
			total += inputNum;
			mean = (float)total / numCount;
		}

		numCount++;

		cout << "\n";
		cout << "Amount of inputs = " << numCount << "\n";
		cout << "Mean of inputs = " << mean << "\n";

	} while (inputNum != 0);
}