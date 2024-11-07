#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array that you want to reverse: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements of Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d index element: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The Array you have given is [");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i == n - 1)
        {
            printf("");
        }
        else
        {
            printf(" , ");
        }
    }
    printf("]");

    // int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[end] ^ arr[start];
        arr[start] = arr[start] ^ arr[end];

        start++;
        end--;
    }

    printf("\nAfter the reversal the given Array is [");

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i == n - 1)
        {
            printf("");
        }
        else
        {
            printf(" , ");
        }
    }

    printf("]");

    return 0;
}