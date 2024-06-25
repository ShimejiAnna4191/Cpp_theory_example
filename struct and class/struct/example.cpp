#include <iostream>
#include <string>

// struct member
// {
//     int age {};
//     double id {};
// };

// struct Compary
// {
//     std::string name {};
//     member CEO {};
// };
struct Compary
{
    struct member
    {
        int age{};
        int id{};
    };
    std::string name{};
    member CEO{}; //set member type to call struct member as line 28 below and it is placed in {}
};


int main(){
    Compary mycompary {"Anna",{15 , 23214}};
    std::cout<<mycompary.CEO.age;
    return 0;
}
