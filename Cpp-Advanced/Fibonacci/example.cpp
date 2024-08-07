#include <iostream>

int fibonacci(int n)
{
    if (n == 0)
    return 0; //base case (termination condition)

    if (n==1)
    return 1;

    else if(n > 1) //base case (termination condition)
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    for (int n = 0; n < 13; n++)
    {
        std::cout<<fibonacci(n)<<"\n";
    }
    return 0;
}
