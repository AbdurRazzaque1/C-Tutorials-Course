#include <stdio.h>

void greater_number(int *a, int *b, int *c)
{
    if (*a > *b)
        *c = *a;
    else
        *c = *b;
}

int main()
{
    int number;
    printf("On how many numbers do you want to perform comparison operation:   ");
    scanf("%d", &number);
    int arr[2 * number - 2];

    for (int i = 0; i < number; i++)
    {
        printf("Enter the number %d:   ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int k = 0, l = 1, m = number; k < (number - 2) * 2; k += 2, l += 2, m++)
        greater_number(&arr[k], &arr[l], &arr[m]);

    if (arr[2 * number - 4] > arr[2 * number - 3])
        printf("\nThe greater number is %d\n", arr[2 * number - 4]);
    else
        printf("\nThe greater number is %d\n", arr[2 * number - 3]);
    return 0;
}

// Jnother way

// #include <stdio.h>

// int main()
// {
//     int number, num, max;
//     printf("On how many numbers do you want to perform comparison operation:   ");
//     scanf("%d", &number);

//     for (int i = 0; i < number; i++)
//     {
//         printf("Enter the number %d:   ", i + 1);
//         scanf("%d", &num);
//         if (i == 0)
//             max = num;
//         else if (num > max)
//             max = num;
//     }
//     printf("The greatest number is %d", max);
// }