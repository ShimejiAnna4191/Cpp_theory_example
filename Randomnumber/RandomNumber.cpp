#include <iostream>
#include <limits>
#include "random.h" 

int getGuess(int count)
{
	while (true)
	{
		std::cout << "Guess #" << count << ": ";

		int guess{};
		std::cin >> guess;

		if (!std::cin) 
		{
			std::cin.clear(); 
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue; // and try again
		}

	
		if (guess < 1 || guess > 100)
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
			continue; 
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return guess;
	}
}


bool playGame(int guesses, int number)
{
	for (int count{ 1 }; count <= guesses; ++count)
	{
		int guess{ getGuess(count) };

		if (guess > number)
			std::cout << "Your guess is too high.\n";
		else if (guess < number)
			std::cout << "Your guess is too low.\n";
		else // guess == number
			return true;
	}
	return false;
}

bool playAgain()
{
	
	while (true)
	{
		char ch{};
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> ch;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		switch (ch)
		{
		case 'y': return true;
		case 'n': return false;
		}
	}
}

int main()
{
	constexpr int guesses{ 10 }; 
	do
	{
		int number{ Random::get(1,100) }; 
		std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have " << guesses << " tries to guess what it is.\n";
		bool won{ playGame(guesses, number) };
		if (won)
			std::cout << "Correct! You win!\n";
		else
			std::cout << "Sorry, you lose. The correct number was " << number << '\n';
	} while (playAgain());

	std::cout << "Thank you for playing.\n";
	return 0;
}
