// Nmuber of abundant numbers from 1 to 1000.

/*

Abundent numbers:-->
An abundent number is a positive integer N for which the sum of divisors of N is greater then N

*/

#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < (i - 1); j++)
        {
            if (i % (j + 1) == 0)
            {
                sum += j + 1;
            }
        }
        if (sum > i)
        {
            printf("%d\t", i);
        }
        sum = 0;
    }
    
    return 0;
}