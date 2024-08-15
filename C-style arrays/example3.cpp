#include <iostream>

int main(){
    int number[] {1,3,2,6,4};
    char chr[] {"hello"};
    const char name[] {"Yoimiya"};

    std::cout<<number<<"\n"; 
    std::cout<<chr<<"\n";
    std::cout<<name<<"\n";
    
    std::cout<<static_cast<const void*>(name)<<"\n"; 
    return 0;
}

// int main()
// {
//     char c{ 'Q' };
//     std::cout << &c; 
//     return 0;
// }
