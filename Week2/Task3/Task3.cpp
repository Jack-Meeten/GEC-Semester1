#include <iostream>

int main()
{
	char playAgain;

	std::cout << "Do you want to play again? y or n?" << "\n";

	std::cin >> playAgain;

	switch (playAgain)
	{
	case 'y':
		std::cout << "You chose to play again";
		break;
	case 'n':
		std::cout << "goodbye";
		break;

	default:
		std::cout << "thats not y or n";
		break;
	}
}
