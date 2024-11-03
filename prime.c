#include <stdio.h>
#include <stdbool.h>
#include<math.h>

bool isPrime(int num);

int main()
{
    int num = 17;
    if (isPrime(num))
    {
        printf("it is prime\n");
    }
    else
    {
        printf("it is not prime");
    }

    return 0;
}

bool isPrime(int num)
{

    bool prime = true;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            prime = false;
        }
    }

    if (prime)
    {
        return true;
    }
    return false;
}