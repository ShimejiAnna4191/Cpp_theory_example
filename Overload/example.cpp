#include <iostream>

class Cents
{
private:
	int m_cents {};

public:
	Cents(int cents) : m_cents{ cents } { }

	friend Cents operator+(const Cents& c1, const Cents& c2);

	int getCents() const { return m_cents; }
};

Cents operator+(const Cents& c1, const Cents& c2)
{
	return c1.m_cents + c2.m_cents;
}

int main()
{
	Cents cents1{6};
	Cents cents2{8};
	Cents centsSum{cents1 + cents2};
	std::cout << "Shimeji have " << centsSum.getCents() << " cents\n";

	return 0;
}
