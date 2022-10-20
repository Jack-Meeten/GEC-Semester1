#include <iostream>
using namespace std;

int main()
{
	int n;
	bool carryOn = true;

	while (carryOn)
	{
		cout << "Enter a number between 1 and 10 : \n";
		cin >> n;

		n++;

		if (n > 0 && n <= 10)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < i; j++)
				{
					cout << " * ";
				}
				cout << "\n";
			}
		}
		else
		{
			continue;
		}

		char yN;

		cout << "Do you want to continue? y or n?\n";
		cin >> yN;
		if (yN == 'y' || yN == 'Y')
		{
			n = 0;
			continue;
		}
		else
		{
			cout << "Goodbye";
			break;
		}
	}
	return 0;
}
