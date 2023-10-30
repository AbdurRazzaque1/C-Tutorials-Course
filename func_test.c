#include <stdio.h>
int main()
{
    int a;
    printf("How many stars do you want to print in the last row:  ");
    scanf("%d", &a);
    for (int i = 0; i < a/2; i++)
    {
        int j;
        for (j = 0; j < 1 + i; j++)
        {
            printf("*");
        }
        for (int k = 0; k < 2 * (a/2 - j); k++)
        {
            printf(" ");
        }
        for (int l = 0; l < 1 + i; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     printf("* * * *\n");
//     printf("*       *\n");
//     printf("*        *\n");
//     printf("*        *\n");
//     printf("*       *\n");
//     printf("* * * *\n");
//     printf("*      *\n");
//     printf("*       *\n");
//     printf("*        *\n");
//     printf("*         *\n\n");
//     return 0;
// }