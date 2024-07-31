#include <iostream>
#include <sstream> //std::stringstream
#include <string>

int main(int argc, char* argv[])
{
	if (argc <= 1)
	{
		//On some operating systems, argv[0] can end up as an empty string instead of the program's name.
		//conditionalize our response on whether argv[0] is empty or not.
		if (argv[0])
			std::cout << "Usage: " << argv[0] << " <number>" << '\n';
		else
			std::cout << "Usage: <program name> <number>" << '\n';

		return 1;
	}

	std::stringstream convert{ argv[1] }; //set up a stringstream variable named convert, initialized with the input from argv[1]
  //std::stringstream works much like std::cin
  //In this case, we’re initializing it with the value of argv[1], so that we can use operator>> to extract the value to an integer variable (the same as we would with std::cin)

	int myint{};
	if (!(convert >> myint)) //do the conversion
		myint = 0; //if conversion fails, set myint to a default value

	std::cout << "Got integer: " << myint << '\n';

	return 0;
}
