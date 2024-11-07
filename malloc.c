#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = malloc(10 * sizeof(*ptr)); /* a block of 15 integers */
    if (ptr != NULL)
    {
        *(ptr + 9) = 480; /* assign 480 to sixth integer */
        printf("Value of the 6th integer is %d", *(ptr + 5));
    }
}
