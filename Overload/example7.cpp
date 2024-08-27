#include <iostream>

class A
{
private:
	int m_x;
public:
	A(int x) : m_x{x}
	{
		if (x <= 0)
			throw 1; 
	}
};

class B : public A
{
public:
	B(int x) try : A{x} 
	{
	}
	catch (...) //note this is at same level of indentation as the function itself
	{       
                std::cerr << "Exception caught\n";
                throw; 
	}
};

int main()
{
	try
	{
		B b{0};
	}
	catch (int)
	{
		std::cout << "Oops\n";
	}
}
