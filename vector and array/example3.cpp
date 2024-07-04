#include <iostream>
#include <vector>

// int main(){
//     std::vector numberical {1, 3 ,5 ,7 ,9};
//     std::size_t numbers {numberical.size()};
//     for (std::size_t length{0}; length < numbers; length++)
//     {
//         std::cout<<numerical[length]<<"\n";
//     }
//     return 0;
// }

int main(){
    std::vector numberical {1, 3 ,5 ,7 ,9};
    for(int num : numberical) //// loop over array numberrical and copy each value into `num`
    {
        std::cout<<num<<"\n";
    } 
    return 0;
}
