// Compare between six numbers by taking input from the user

#include <stdio.h>

int main()
{
    int arr[10], i;
    for (i = 0; i < 6; i++)
    {
        printf("Enter the number %d:   ", i + 1);
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1])
        arr[6] = arr[0];
    else
        arr[6] = arr[1];

    if (arr[2] > arr[3])
        arr[7] = arr[2];
    else
        arr[7] = arr[3];

    if (arr[5] > arr[6])
        arr[8] = arr[5];
    else
        arr[8] = arr[6];

    if (arr[6] > arr[7])
        arr[9] = arr[6];
    else
        arr[9] = arr[7];

    if (arr[8] > arr[9])
        printf("\nThe greatest number is %d\n", arr[8]);
    else
        printf("\nThe greatest number is %d\n", arr[9]);

    return 0;
}