#include <iostream>

int main()
{
	bool a = false;
	bool b = true;
	int num1 = 12;
	int num2 = 5;
	int num3 = 7;
	if (a)
	{
		num1 += 10;
		num2 += 15;
	}
	else if (b)
	{
		num1++;
		num3 += 20;
	}
	else
	{
		num1--;
		num2--;
		num3--;
	}

	std::cout << "Num1 : " << num1 << "\n";
	std::cout << "Num2 : " << num2 << "\n";
	std::cout << "Num3 : " << num3 << "\n";
}
