#include <iostream>

bool oddEven(int a);
void outpuResult(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);

int main()
{
	int input;

	int oddTotal = 0;
	int evenTotal = 0;

	int oddCount = 0;
	int evenCount = 0;

	for (int i = 0; i < 10; i++)
	{
		bool isEven;

		std::cout << "Enter int " << i + 1 << " : ";
		std::cin >> input;
		std::cout << "\n";
		isEven = oddEven(input);
		if (isEven == 0)
		{
			evenCount++;
			evenTotal += input;
		}
		else
		{
			oddCount++;
			oddTotal += input;
		}
	}
	outpuResult(oddTotal, oddCount, evenTotal, evenCount);
}

bool oddEven(int a)
{
	if (a % 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void outpuResult(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	std::cout << "Amount of odd number were : " << oddTotal << ", odd total was : " << numOfOdd << "\n";
	std::cout << "Amount of even number were : " << evenTotal << ", even total was : " << numOfEven << "\n";
}