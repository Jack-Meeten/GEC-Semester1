#include <iostream>
#include <string>

using namespace std;

struct userData
{
	string name;
	int age;
	string telephoneNumber;
	void OutputVar(userData input);
};
int main()
{
	userData playerInput;

	cout << "Enter your name : \n";
	getline(cin, playerInput.name);
	cout << "Enter your age : \n";
	cin >> playerInput.age;
	cout << "Enter your telephone number : \n";
	cin >> playerInput.telephoneNumber;

	playerInput.OutputVar(playerInput);
}

void userData::OutputVar(userData input)
{
	cout << "Name : " << input.name << "\nAge : " << input.age << "\nMobile Number : " << input.telephoneNumber;
}
