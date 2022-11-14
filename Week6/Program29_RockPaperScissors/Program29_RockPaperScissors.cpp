#include <iostream>
#include <random>

using namespace std;

int PlayTurn();

int main()
{
    int playerScore = 0;
    int compScore = 0;

	while (playerScore < 3 || compScore < 3)
	{
		int result = PlayTurn();

		if (result == 0)
		{
			cout << "You win this round!\n";
			playerScore++;
		}
		else if (result == 1)
		{
			cout << "You loose this round!\n";
			compScore++;
		}
		else
		{
			cout << "This round is a tie!\n";
		}

		cout << "You need " << 3 - playerScore << " to win.\n";
		cout << "The computer needs " << 3 - compScore << " to win.\n";

		cout << "_____________________________\n";

		if (playerScore == 3)
		{
			cout << "You Win!\n" << "Game Over!";
			return 0;
		}
		else if (compScore == 3)
		{
			cout << "You Loose :(\n" << "Game Over!";
			return 0;
		}
	}
}

int PlayTurn()
{
	string choices[] = { "Rock", "Paper", "Scissors" };

	string input;
	string compInput;

	cout << "Choose your move : ";
	cin >> input;

	compInput = choices[rand() % 3];
	cout << "The computer chose : " << compInput << "\n";
	cout << "\n";

	if (input == "Paper" || input == "paper")
	{
		if (compInput == "Rock")
		{
			return 0;
		}
		else if (compInput == "Scissors")
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	else if (input == "Rock" || input == "rock")
	{
		if (compInput == "Rock")
		{
			return 2;
		}
		else if (compInput == "Scissors")
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if(input == "Scissors" || input == "scissors")
	{
		if (compInput == "Rock")
		{
			return 1;
		}
		else if (compInput == "Scissors")
		{
			return 2;
		}
		else
		{
			return 0;
		}
	}
	return 2;
}