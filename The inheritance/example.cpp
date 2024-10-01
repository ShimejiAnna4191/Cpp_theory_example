//This is basic example about inheritance in c++

#include <string>
#include <string_view>

class Person
{
//In this example, we're making our members public for simplicity
public:
    std::string m_name{};
    int m_age{};

    Person(std::string_view name = "", int age = 0)
        : m_name{ name }, m_age{ age }
    {
    }

    const std::string& getName() const { return m_name; }
    int getAge() const { return m_age; }
};

class BaseballPlayer : public Person
{
public:
    double m_battingAverage{};
    int m_homeRuns{};

    BaseballPlayer(double battingAverage = 0.0, int homeRuns = 0)
       : m_battingAverage{battingAverage}, m_homeRuns{homeRuns}
    {
    }
};

int main()
{
    //Create a new BaseballPlayer object
    BaseballPlayer Anna{};
    //Assign it a name (we can do this directly because m_name is public)
    Anna.m_name = "Anna";
    //Print out the name
    std::cout << Anna.getName() << '\n'; 
    //use the getName() function we've acquired from the Person base class
    return 0;
}
