#include <iostream>
#include <string>
#include <utility> //std::move

template <typename T>
void mySwapMove(T& a, T& b)
{
	T tmp { std::move(a) };
	a = std::move(b);
	b = std::move(tmp);
}

int main()
{
	std::string x{ "abc" };
	std::string y{ "de" };

	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';

	mySwapMove(x, y);

	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';

	return 0;
}
