// Calculating the power of a number using recursion.

#include <stdio.h>
long power_of_a_number(int, int);

int main()
{
    int base, index;
    printf("Let's find the power of a number.\n\n");
    printf("Enter an integer for base:  ");
    scanf("%d", &base);
    printf("Enter an POSITIVE inetger for index:  ");
    scanf("%d", &index);
    printf("\nThe value of %d to the power %d is %li\n", base, index, power_of_a_number(base, index));
    return 0;
}

long power_of_a_number(int base, int index)
{
    if (index == 0)
    {
        return 1;
    }
    
    return base * power_of_a_number(base, index - 1);
}