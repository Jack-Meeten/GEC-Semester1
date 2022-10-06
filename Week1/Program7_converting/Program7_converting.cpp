#include <iostream>

int main()
{
	float farenheit = 95.0f;
	float celcius;

	celcius = (farenheit - 32) * 0.5556f;

	std::cout << farenheit << "F is equal to " << celcius << "C." << "\n";
}