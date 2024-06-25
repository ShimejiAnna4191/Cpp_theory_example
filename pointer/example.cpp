#include <optional>//std::optional
#include <functional>//std::reference_wrapper
#include <iostream>
#include <string>//std::string

//ví dụ 1
// struct UesrnameID
// {
//     std::string name{};
//     int id{};
// };
// void user(std::optional<std::reference_wrapper<UesrnameID>> e=std::nullopt){
//     if (e)
//     {
//         std::cout<<"your ID is: "<<e->get().id<<'\n';
//     }
//     else
//     {
//         std::cout<<"your ID is undefine";
//     }
// }
// int main(){
//     user();

//     UesrnameID Anna {"Anna", 15};
//     user(Anna);
//     return 0;
// }

//ví dụ 2
struct UesrnameID //I have never learning struct but anyway
{
    std::string name{};
    int id{};
};
void user(const UesrnameID* e=nullptr) //use pointer UsernameID
{ 
    if (e)
    {
        std::cout<<"your ID is: "<<e->id<<'\n'; 
    }
    else
    {
        std::cout<<"your ID is undefine"<<'\n';
    }
    
}
int main(){
    user();

    UesrnameID Ivan {"Ivan", 18};
    user(&Ivan); //For pointers, you must use the & syntax to tell it the address to look for
    return 0;
}
