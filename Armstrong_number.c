#include <stdio.h>

unsigned int armstrong(unsigned int num, int n);

int main()
{
    int n_d = 0;
    unsigned int number, temp;
    while (1)
    {
        printf("Enter an integer to check whether the number is armstrong number or not:   ");
        scanf("%u", &number);
        getchar();
        temp = number;
        while (temp != 0)
        {
            temp /= 10;
            n_d++;
        }
        if (number == armstrong(number, n_d) || number == 0) // Function calling.
        {
            printf("The number is a armstrong number.\n\n");
        }
        else
        {
            printf("The number is not a armstrong number.\n\n");
        }
        n_d = 0;
    }
    return 0;
}

unsigned int armstrong(unsigned int num, int n) // Checking whether a number is armstrong or not.
{
    unsigned int result = 1, temp = 0;
    while (num != 0)
    {
        for (int j = 0; j < n; j++)
        {
            result *= (num % 10);
        }
        num /= 10;
        temp += result;
        result = 1;
    }
    return temp;
}