// Finding the number of deficient numbers between 1 to 1000.

/*

Deficient numbers:-->
A deficient number or defective number is a positive integer n for which the sum of divisors of n is less than 2n

*/

#include <stdio.h>
#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < (i); j++)
        {
            if (i % (j + 1) == 0)
            {
                sum += (j + 1);
            }
        }
        if (sum < 2 * i)
        {
            printf("%d\t", i);
        }
        sum = 0;
    }
    return 0;
}