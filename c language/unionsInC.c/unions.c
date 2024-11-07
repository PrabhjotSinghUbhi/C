#include <stdio.h>

union test
{
    int a;
    int b;
    int z;
    char name ;
} c;

int main()
{
    // c.a = 5;
    // c.b = 178;
    // c.z = ;
    c.name = 'h';
    printf("%d\n",c.a);
    printf("%d\n",c.b);
    printf("%d\n",c.z);
    printf("%c\n",c.name);

    return 0;
}