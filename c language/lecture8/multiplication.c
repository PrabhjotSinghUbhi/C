// print multiplication table of a number n entered by the user.
#include <stdio.h>

int main()
{
    int n;
    printf("enter any number n: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}