#include <iostream>
#include <limits>
#include <numeric> //std::gcd

class Fraction
{
private:
    int m_numerator{ 0 };
    int m_denominator{ 1 };

public:
    Fraction(int numerator=0, int denominator = 1) :
        m_numerator{ numerator }, m_denominator{ denominator }
    {
        reduce();
    }

    void reduce()
    {
        int gcd{ std::gcd(m_numerator, m_denominator) };
        if (gcd)
        {
            m_numerator /= gcd;
            m_denominator /= gcd;
        }
    }

    friend Fraction operator*(const Fraction& f1, const Fraction& f2);
    friend Fraction operator*(const Fraction& f1, int value);
    friend Fraction operator*(int value, const Fraction& f1);

    friend std::ostream& operator<<(std::ostream& out, const Fraction& f1);

    void print()
    {
        std::cout << m_numerator << '/' << m_denominator << '\n';
    }
};

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
    return Fraction { f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator };
}

Fraction operator*(const Fraction& f1, int value)
{
    return Fraction { f1.m_numerator * value, f1.m_denominator };
}

Fraction operator*(int value, const Fraction& f1)
{
    return Fraction { f1.m_numerator * value, f1.m_denominator };
}

std::ostream& operator<<(std::ostream& out, const Fraction& f1)
{
    out << f1.m_numerator << '/' << f1.m_denominator;
    return out;
}

std::istream& operator>>(std::istream& in, Fraction& f1)
{
    int numerator {};
    char ignore {};
    int denominator {};

    in >> numerator >> ignore >> denominator;

    if (in)
        f1 = Fraction { numerator, denominator };

    return in;
}

int main()
{
    Fraction f1{};
    std::cout << "Enter fraction 1: ";
    std::cin >> f1;
    std::cout << f1 << '\n';

    Fraction f2{};
    std::cout << "Enter fraction 2: ";
    std::cin >> f2;

    std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n'; // note: The result of f1 * f2 is an r-value

    return 0;
}
