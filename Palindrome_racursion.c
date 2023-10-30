// Checking a numbtr is a palindrome or not using recursion.

#include <stdio.h>

int rPalindrome(int, int);

int main()
{
    int num, temp, n = 1;
    printf("Enter a number to check whether the number is palindrome or not:   ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        temp /= 10; // finding number of digits in num.
        n *= 10;
    }
    if (rPalindrome(num, n / 10) == num) // rplaindrome function calling.
    {
        printf("The number is a palindrame.");
    }
    else
    {
        printf("The number is not a palindraome.");
    }
    return 0;
}

//  Making a function that checks whether a number is palindrome or not using recursion.

int rPalindrome(int palin, int n) // n is the number of digits of the number. and palin is the number. 
{
    if (palin != 0)
    {
        return (n * (palin % 10) + rPalindrome(palin / 10, n / 10)); // rpalindrome function calling itself.
    }
    return 0;
}