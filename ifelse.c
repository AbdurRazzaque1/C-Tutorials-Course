// Take two numbers input from the user and compair those numbers.

#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter the first number:\t");
    scanf("%d", &a);
    printf("Enter the second  number:\t");
    scanf("%d", &b);
    if (a > b)
    {
        printf("%d is greater than %d", a, b);
    }
    else if (a == b)
    {
        printf("%d is equal to %d", a, b);
    }
    else
    {
        printf("%d is less than %d", a, b);
    }

    return 0;
}
