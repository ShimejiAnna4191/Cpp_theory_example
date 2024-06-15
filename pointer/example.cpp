#include <optional>//để sử dụng std::optional
#include <functional>//để sử dụng std::reference_wrapper
#include <iostream>
#include <string>//để sử dung std::string

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
struct UesrnameID
{
    std::string name{};
    int id{};
};
void user(const UesrnameID* e=nullptr){ //sử dụng con trỏ UsernameID
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
    user(&Ivan); //đối với con trỏ thì phải sử dụng & để cho nó biết địa chỉ mà tìm
    return 0;
}
