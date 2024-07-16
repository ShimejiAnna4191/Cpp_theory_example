#include <iostream>

int main()
{
    std::cout << "How many names would you like to enter? ";
    std::size_t lenght{};
    std::cin >> lenght;

    auto* array{new std::string[lenght]{}};

    for(std::size_t count{0}; count < lenght; ++count)
    {
        std::cout << "Enter name #" << count + 1 << ": ";
        std::getline(std::cin >> std::ws, array[count]);
    }

    std::sort(array, array + lenght);

    std::cout << "\nHere is your sorted list:\n";

    for(std::size_t i{0}; i < lenght; ++i)
    {
        std::cout << "Name #" << i + 1 << ": " << array[i] << ' ';
        std::cout << '\n';
    }
    std::cout << '\n';

    delete[] array;
    return 0;
}
