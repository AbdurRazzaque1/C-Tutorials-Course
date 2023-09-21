#include <stdio.h>

int main()
{
    int  i, j, num;
    while (1)
    {
        printf("\aEnter a positive integer to check whether the number is prime or not:    ");
        scanf("%d", &num);
        for (i = 1, j = 0; i <= num; i++)
        {
            if (num % i == 0)
            {
                j++;
            }
            if (j==3)
            {
                break;
            }
        }

        if (j == 2)
        {
            printf("The number %d is a prime number.\n", num);
        }
        else if(j==0 || num==0)
        {
            printf("Please enter a positive integer. %d is not a positive number.\n" , num);
        }
        else if (num == 1)
        {
            printf("%d is neither prime nor composite.\n", num);
        }
        else
        {
            printf("The number %d is a composite number.\n", num);
        }
    }
}