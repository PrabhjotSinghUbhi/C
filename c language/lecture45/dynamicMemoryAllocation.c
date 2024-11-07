#include <stdio.h>

int main()
{
    int i = 0;
loop:
    if (i < 5)
    {
        i++;
        printf("%d\n",i);
        goto loop;
    }
    return 0;
}