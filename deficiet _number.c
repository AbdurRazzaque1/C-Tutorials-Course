// Checking a number is deficient or not

/*

Deficient numbers:-->
A deficient number or defective number is a positive integer n for which the sum of divisors of n is less than 2n

*/

#include <stdio.h>
#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number to check whether the number is deficient or not:  ");
    scanf("%d", &num);
    for (int i = 0; i < (num); i++)
    {
        if (num % (i + 1) == 0)
        {
            sum += (i + 1);
        }
    }
    if (sum < 2 * num)
    {
        printf("The number is deficient.");
    }
    else
    {
        printf("The number is not deficient.");
    }
    return 0;
}