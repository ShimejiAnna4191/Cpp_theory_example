#include <algorithm> // std::sort
#include <cstddef>
#include <iostream>
#include <string>

std::size_t getcountName(){
    std::cout <<"How many names do you want to add?"<<"\n";
    std::size_t length {};
    std::cin>>length;

    return length;
}

void getName(std::string* name, std::size_t length)
{
    for (std::size_t i {0}; i < length; i++)
    {
        std::cout<<"Nnter name "<<i + 1<<": ";
        std::getline(std::cin>>std::ws, name[i]);
    }
}

void printName(std::string* name, std::size_t length)
{
    std::cout<<"\nHere is your name list:\n";
    for (std::size_t i {0}; i < length; i++)
    {
        std::cout<<"Name "<<i + 1<<": "<<name[i]<<'\n';
    } 
}

int main(){
    std::size_t length {getcountName()};
    auto* names{new std::string[length]{}};

    getName(names, length);
    std::sort(names, names+length);

    printName(names, length);
    delete[] names;

    return 0;
}
