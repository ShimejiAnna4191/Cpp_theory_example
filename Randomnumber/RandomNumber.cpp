#include <iostream>
#include <limits>
#include "random.h" 

int getGuess(int count)
{
	while (true) //will loop until user enters valid input
	{
		std::cout << "Guess #" << count << ": ";

		int guess{};
		std::cin >> guess;

		if (!std::cin) //check if extraction fail
		{
			std::cin.clear(); 
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //remove the bad input
			continue; 
		}

	
		if (guess < 1 || guess > 100)
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //remove any extraneous input 
			continue; 
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //remove any extraneous input 
		return guess;
	}
}


bool playGame(int guesses, int number) //suggest
{
	for (int count{ 1 }; count <= guesses; ++count)
	{
		int guess{ getGuess(count) };

		if (guess > number)
			std::cout << "Your guess is too high.\n";
		else if (guess < number)
			std::cout << "Your guess is too low.\n";
		else if (guess == number)
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
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //remove any extraneous input

		switch (ch)
		{
		case 'y': return true;
		case 'n': return false;
		}
	}
}

int main()
{
	constexpr int guesses{ 10 }; //limit the number of number guesses
	do
	{
		int number{ Random::get(1,100) }; //range of numbers the player must guess
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
