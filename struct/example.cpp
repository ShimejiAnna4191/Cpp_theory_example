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
    member CEO{}; //đặt kiểu member để có thế gọi struct member như dòng 28 bên dưới và nó được đặt trong {}
};


int main(){
    Compary mycompary {"Anna",{15 , 23214}};
    std::cout<<mycompary.CEO.age;
    return 0;
}

