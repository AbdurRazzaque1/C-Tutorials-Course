#include <stdio.h>

void starPattern(int b)
{
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < 1 + i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
}

void reverseStarPattern(int b)
{
    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < b - j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
}

int main()
{
    int a, b;
start:
    printf("Press 0 to print star pattern.\n            *\nLike this   **\n            ***\n            ****\nPress 1 to print star pattern.\n            ****\nLike this   ***\n            **\n            *\n\n");
    scanf("%d", &a);
    switch (a)
    {
    case 0:
        printf("How many stars do you want to print at the bottom:   ");
        scanf("%d", &b);
        starPattern(b);
        break;

    case 1:
        printf("How many stars do you want to print at the top:   ");
        scanf("%d", &b);
        reverseStarPattern(b);
        break;

    default:
        printf("Please enter 0 or 1 only.\n\n");
        break;
    }
    goto start;
    return 0;
}