#include <iostream>
using namespace std;

int main()
{
	int rain = 1;
	int snow = 2;

	int input1;
	float temp;

	cout << "Please tell me if it is raining with '1' or snowing with '2'" << "\n";
	cin >> input1;
	cout << "What is the temperature in Celcius" << "\n";
	cin >> temp;

	if (input1 == 1)
	{
		if (temp > 15)
		{
			cout << "Wear a thin coat" << "\n";
		}
		else
		{
			cout << "Wear a thick coat" << "\n";
		}
	}
	else if (input1 == 2)
	{
		if (temp > 5)
		{
			cout << "Wear a something warm" << "\n";
		}
		else if (temp > 0)
		{
			cout << "Wrap up well" << "\n";
		}
		else
		{
			cout << "Stay home" << "\n";
		}
	}
	else
	{
		cout << "Have a nice day" << "\n";
	}
}