#include <iostream>

int main()
{
	bool a = true;
	int num1 = 12;
	int num2 = 5;
	int num3 = 7;
	if (a)
	{
		num1++;
		num2 += 5;
	}
	num3 *= 2;

	std::cout << "Num1 : " << num1 << "\n";
	std::cout << "Num2 : " << num2 << "\n";
	std::cout << "Num3 : " << num3 << "\n";
}
