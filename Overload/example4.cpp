#include <iostream>

class Cents
{
private:
    int m_cents {};

public:
    Cents(int cents): m_cents{cents} 
    {
    }

    Cents operator-() const;

    int getCents() const { return m_cents; }
};

//note: this function is a member function!
Cents Cents::operator-() const
{
    return -m_cents; 
}
int main()
{
    const Cents nickle{ 5 };
    std::cout << "A nickle of debt is worth " << (-nickle).getCents() << " cents\n";

    return 0;
}
