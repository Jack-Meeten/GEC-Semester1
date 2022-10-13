#include <iostream>

using namespace std;

int main()
{
	char status;
	int choice;

	cout << "Please tell me your status with 's' for student, 't' for teacher or 'o' for other." << "\n";
	cin >> status;
	cout << "Which game would you like '1' or '2'?" << "\n";
	cin >> choice;

	if (status == 's' || status == 't')
	{
		if (choice == 1)
		{
			cout << "You get a 20 % discount" << "\n";
		}
		else if(choice == 2)
		{
			cout << "You get a 10 % discount" << "\n";
		}
		else
		{
			cout << "You get no discount" << "\n";
		}
	}
	else
	{
		cout << "You get no discount" << "\n";
	}
}