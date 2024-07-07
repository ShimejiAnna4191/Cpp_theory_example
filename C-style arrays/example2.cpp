#include <iostream>

int main()
{
    char name[255] {}; // declare array large enough to hold 254 characters + null terminator
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "You entered: " <<name<< '\n';

    return 0;
}
