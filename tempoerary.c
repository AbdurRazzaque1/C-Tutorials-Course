// // Printing 100 100 times without using loop, recursion.

// #include <stdio.h>
// int main()
// {
//     int a = 0;
//     start:
//     printf("%d: %d\n", a+1, 100);
//     a++;
//     if(a < 100)
//     {
//         goto start;
//     }
//     return 0;
// }

/**********************************************************************************************************************************************************************************************************************************************************************************************************************/
#include <stdio.h>

void consicutiveSumOfPrimeNumbers(int);
int prime(int);

int main()
{
    int num;
    printf("Enter a number:  ");
    scanf("%d", &num);
    consicutiveSumOfPrimeNumbers(num);
    return 0;
}

void consicutiveSumOfPrimeNumbers(int n)
{
    int a = 0, b = 0, sum = 0;
    for (int i = 3; i <= n; i++)
    {
        if (prime(i))
        {
            a = 0;
            for (int k = 2; k <= i; k++)
            {
                if (prime(k))
                    sum += k;
                if (sum >= i)
                    break;
                a = 0;
            }
        }
        if (sum == i)
            {
                printf("%d  ", i);
                b++;
            }
        sum = 0;
        a = 0;
    }
    printf("\n\n%d\n", b);
}

int prime(int num)
{
    int a = 0;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
            a++;
        if (a == 2)
            break;
    }
    if (a == 1)
        return 1;
    return 0;
}
/**********************************************************************************************************************************************************************************************************************************************************************************************************************/

/**********************************************************************************************************************************************************************************************************************************************************************************************************************/
