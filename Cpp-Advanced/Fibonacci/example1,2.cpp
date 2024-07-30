//The above example Fibonacci algorithm isn’t very efficient, in part because each call to a Fibonacci non-base case results in two more Fibonacci calls
//This produces an exponential number of function calls (in fact, the above example calls fibonacci() 1205 times!)
//There are techniques that can be used to reduce the number of calls necessary
//One technique called `memoization`, caches the results of expensive function calls so the result can be returned when the same input occurs again

#include <iostream>
#include <vector>

//n is now a std::size_t to make indexing the std::vector easier
int fibonacci(std::size_t n)
{
	//use a static std::vector to cache calculated results
	static std::vector results{ 0, 1 };

	//If we've already seen this n, then use the cache'd result
	if (count < std::size(results))
		return results[n];

	//Otherwise calculate the new result and add it
	results.push_back(fibonacci(count - 1) + fibonacci(count - 2));
	return results[n];
}

//And a main program to display the first 13 Fibonacci numbers
int main()
{
	for (int count { 0 }; count < 13; ++count)
		std::cout << fibonacci(static_cast<std::size_t>(count)) << ' ';

	return 0;
}

