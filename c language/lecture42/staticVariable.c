#include<stdio.h>

int b = 34;    //global value

int fun4(int b2){
    // b *= 10;
    printf("the value of b inside function is %d\n",b);
    // printf("the address of b is %d\n",&b);
    return b2*10;
}


int main()
{
    int b = 344;   
    int val = fun4(b);
    int *ptr = &val;                           //local variable takes precedence over global variable.
    printf("the value of b inside main function is %d\n",val);
    // printf("the value of is : %d",val);
    // printf("the address of b is  %d\n ",&b );
    return 0;
}