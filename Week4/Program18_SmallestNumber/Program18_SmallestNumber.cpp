#include <iostream>

void smallestNum(int a, int b);
float multiplyByTen(int a);
float divideByThree(float a);

int main()
{
    int inputOne, inputTwo;
	float multipliedNum;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Please enter int pair " << i + 1<< "...\n";
		std::cout << "Int 1 = ";
		std::cin >> inputOne;
		std::cout << "Int 2 = ";
		std::cin >> inputTwo;

		smallestNum(inputOne, inputTwo);
	}

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Please enter int to be multiplied...\n";
		std::cout << "Int = ";
		std::cin >> inputOne;

		multipliedNum = multiplyByTen(inputOne);
		std::cout << multipliedNum << " divided by 3 = " << divideByThree(multipliedNum);
		std::cout << "\n";
		std::cout << "\n";
	}
}

void smallestNum(int a, int b)
{
	if (a > b)
	{
		std::cout << "Smallest number is " << b << "\n";
	}
	else if (a < b)
	{
		std::cout << "Smallest number is " << a << "\n";
	}
	else
	{
		std::cout << "Both numbers are equal " << a << "\n";
	}
	std::cout << "\n";
}

float multiplyByTen(int a)
{
	return a * 10;
}

float divideByThree(float a)
{
	return a / 3;
}
