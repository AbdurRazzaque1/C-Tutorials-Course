// Swapping of two numbers without using any extra variable.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter an integer:  ");
    scanf("%d", &a);
    printf("Enter another integer:  ");
    scanf("%d", &b);
    printf("The value of a and b before swapping: %d and %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of a and b after swapping: %d and %d", a, b);
    return 0;
}