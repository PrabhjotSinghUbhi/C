#include<stdio.h>
#include<string.h>

int main()
{
    char name[50]  = "prabhjot";

    int z = strlen(name);

    for (int i = 8; i > 0; i--)
    {
        printf("%c",name[i]);
    }
    
    return 0;
}