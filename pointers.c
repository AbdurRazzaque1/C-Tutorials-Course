#include <stdio.h>

int main()
{
    int arr[6], i;
    for (i = 0; i < 6; i++)
    {
        printf("Enter the number %d:   ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 6; i++)
    {
        printf("The number is %d\n", arr[5 - i]);
    }
    return 0;
}