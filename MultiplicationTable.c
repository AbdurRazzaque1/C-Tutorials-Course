// Take a number as input from the user and print multiplication table of that number.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer number to print the table of that number:\t");
    scanf("%d", &a);
    printf("\nThe multiplication table of %d is as follows:\n\n", a);
    printf("%d x 1 = %d\n", a, a * 1);
    printf("%d x 2 = %d\n", a, a * 2);
    printf("%d x 3 = %d\n", a, a * 3);
    printf("%d x 4 = %d\n", a, a * 4);
    printf("%d x 5 = %d\n", a, a * 5);
    printf("%d x 6 = %d\n", a, a * 6);
    printf("%d x 7 = %d\n", a, a * 7);
    printf("%d x 8 = %d\n", a, a * 8);
    printf("%d x 9 = %d\n", a, a * 9);
    printf("%d x 10 = %d", a, a * 10);
    return 0;
}

// It can print by using loop very easily.