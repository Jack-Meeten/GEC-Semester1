#include <iostream>

int main()
{
	const float pi = 3.14159f;

	float area, radius = 25.0f;

	area = pi * radius * radius;

	std::cout << "The area of a circle with a radius of " << radius << " is " << area << "\n";
}