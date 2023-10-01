#include <stdio.h>

int main()
{
    int  i, j, num = -1;
    while (1)
    {
        printf("TO EXIT PRESS \"0\"\n\nEnter a positive integer to check whether the number is prime or not:    ");
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
        
        if (num == 0)
        {
            printf("\nOk, The program is exiting.\n");
            printf("Thankyou for using the program.\nkeep leaning more and more\nHave a good day!\n");
            break;
        }
        else if (num == 1)
        {
            printf("%d is neither prime nor composite.\n\n", num);
        }
        else if (j == 2)
        {
            printf("The number %d is a prime number.\n\n", num);
        }
        else if (j > 2)
        {
            printf("The number %d is a composite number.\n\n", num);
        }
        else if(j==0)
        {
            printf("You haven't entered a valid number. Please enter a valid number.\n\n");
        }
        getchar();
        num = -1;
    }
    return 0;
}