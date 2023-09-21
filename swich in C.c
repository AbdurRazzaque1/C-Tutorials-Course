#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers:   ");
    scanf("%d %d", &a, &b);
    switch (a)
    {
    case 1:
        switch (b)
        {
        case 1:
            printf("A and B are equal that is 1");
            break;
        case 2:
            printf("A is 1 and B is 2");
            break;
        case 3:
            printf("A is 1 and B is 3");
            break;

        default:
            printf("A is 1 but B is not 1 or 2 or 3");
        }
        break;
    case 2:
        switch (b)
        {
        case 1:
            printf("A is 2 and B is 1");
            break;
        case 2:
            printf("A and B are equal that is 2");
            break;
        case 3:
            printf("A is 2 and B is 3");
            break;
        default:
            printf("A is 2 but B is not 1 or 2 or 3");
        }
        break;
    case 3:
        switch (b)
        {
        case 1:
            printf("A is 3 and B is 1");
            break;
        case 2:
            printf("A is 3 and B is 2");
            break;
        case 3:
            printf("A and B are equal that is 3");
            break;
        default:
            printf("A is 3 but B is not 1 or 2 or 3");
        }
        break;

    default:
        printf("It is working properly");
    }
    return 0;
}