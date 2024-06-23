//class example
#include <iostream>
#include <string>
#include <string_view>

class Person
{
private:
    std::string m_name{};
public:
    void hug(const Person& h)const
    {
        std::cout <<m_name<<" hug "<<h.m_name<<'\n';
    }
    void setPerson(std::string_view name)
    {
        m_name = name;
    }
};

int main(){
    Person Anna;
    Anna.setPerson("Anna");

    Person Ivan;
    Ivan.setPerson("Ivan");

    Anna.hug(Ivan);
    //Ivan.hug (Anna);
    return 0;
}
