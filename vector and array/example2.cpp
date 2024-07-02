#include <iostream>
#include <limits>
#include <vector>

template <typename T>
void printArray(const std::vector<T>& arr)
{
    for (std::size_t index{ 0 }; index < arr.size(); ++index)
    {
        std::cout << arr[index] << ' ';
    }

    if (arr.size() > 0)
        std::cout << '\n';
}

template <typename T>
int findIndex(const std::vector<T>& arr, T num)
{
    for (std::size_t index{ 0 }; index < arr.size(); ++index)
    {
        if (arr[index] == num)
            return static_cast<int>(index);
    }

    return -1; 
}

int getValidNumber()
{
    
    int num {};
    do
    {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> num;

        if (!std::cin)
            std::cin.clear(); 

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    } while (num < 1 || num > 9);

    return num;
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    int num { getValidNumber() };

    printArray(arr);

    int index { findIndex(arr, num) };

    if (index != -1)
        std::cout << "The number " << num << " has index " << index << '\n';
    else
        std::cout << "The number " << num << " was not found\n";

    
