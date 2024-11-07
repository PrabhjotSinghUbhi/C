#include <stdio.h>

int main()
{
    int a , b ;

    printf("enter value of a: ");
    scanf("%d",&a);
    printf("enter value of b: ");
    scanf("%d",&b);

    // swaping of two numbers without using third variable.

    a = a^b;
    b = b^a;
    a = a^b;

    printf("\nafter swaping a = %d\n",a);
    printf("after swaping b = %d",b);

    return 0;
}