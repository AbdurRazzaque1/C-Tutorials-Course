#include <stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }

    else if (number<0)
    {
        return 0;
    }

    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("Enter the number to find the factorial:\t");
    scanf("%d", &num);
    if (factorial(num) != 0)
    {
        printf("The factorial of %d is %d", num, factorial(num));
    }
    else
    {
        printf("Please enter a positive integer.");
    }
}