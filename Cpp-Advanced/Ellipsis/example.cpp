#include <iostream>
#include <cstdarg> //to use ellipsis

double findAvergare(double count, ...)
{
    int sum{0};

    std::va_list list;

    va_start(list, count);

    for (int arg = 0; arg < count ; arg++)
    {
        sum += va_arg (list, int);
    }
    va_end(list);

    return static_cast<double>(sum) / count;
}

int main()
{
    std::cout<<findAvergare(5, 1, 2, 3, 4, 5)<<"\n";
    std::cout<<findAvergare(6, 1, 2, 3, 4, 5, 6)<<"\n";
    return 0;
}
