#include <iostream>
#include <utility>

int main(){
    int x {3};
    int y {4};

    std::cout<<"before swap:  "<<x<<' '<<y<<"\n";
    std::swap(x, y);
    std::cout<<"after swap: "<<x<<' '<<y<<"\n";

    return 0;
}
