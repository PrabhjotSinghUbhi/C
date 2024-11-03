//perfect numbers are numbers are numbers such that when there factors are added their result is same as the original 
#include<stdio.h>
int PerfectNumber(int num);

int main()
{
    int num = 28;

    if (PerfectNumber(num))
    {
        printf("it is a perfect number\n");
    }
    else
    {
        printf("it is not a perfect number\n");

    }

    return 0;
}

int PerfectNumber(int num){

    int sum = 0;

    for (int i = 1; i <= num/2; i++)
    {
        if (num%i == 0)
        {
            sum  += i;
        }
    }
    
    if (sum == num)
    {
        return 1;
    }

    return 0;
}