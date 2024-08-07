//Here’s a full example of a selection sort that uses a function pointer parameter to do a user-defined comparison, along with an example of how to call it

#include <utility> // for std::swap
#include <iostream>

// Note our user-defined comparison is the third parameter
void selectionSort(int* array, int size, bool (*comparisonFcn)(int, int))
{
    // Step through each element of the array
    for (int startIndex{ 0 }; startIndex < (size - 1); ++startIndex)
    {
        int bestIndex{ startIndex };
      
        for (int currentIndex{ startIndex + 1 }; currentIndex < size; ++currentIndex)
        {
            if (comparisonFcn(array[bestIndex], array[currentIndex])) 
            {
                bestIndex = currentIndex;
            }
        }

        // Swap our start element with smallest/largest element
        std::swap(array[startIndex], array[bestIndex]);
    }
}

// (Note: it's exactly the same as the previous ascending() function)
bool ascending(int x, int y)
{
    return x > y; // swap if the first element is greater than the second
}

bool descending(int x, int y)
{
    return x < y; // swap if the second element is greater than the first
}

void printArray(int* array, int size)
{
    for (int index{ 0 }; index < size; ++index)
    {
        std::cout << array[index] << ' ';
    }

    std::cout << '\n';
}

int main()
{
    int array[9]{ 3, 7, 9, 5, 6, 1, 8, 2, 4 };

    // Sort the array in descending order using the descending() function
    selectionSort(array, 9, descending);
    printArray(array, 9);

    // Sort the array in ascending order using the ascending() function
    selectionSort(array, 9, ascending);
    printArray(array, 9);

    return 0;
}
