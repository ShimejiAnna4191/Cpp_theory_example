#include <iostream>

void printBinary(unsigned int n)
{
	if (n > 1)
	{
		printBinary(n / 2);
	}
	std::cout << n % 2;
}

int main()
{
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;

	printBinary(static_cast<unsigned int>(x));
}
