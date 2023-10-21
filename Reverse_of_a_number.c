#include <stdio.h>

int main()
{
    int num, reverse = 0, remainder, temp;
    printf("Enter a number:   ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    printf("The reversed number is %d\n\n", reverse);
    if (num == reverse)
    {
        printf("The number %d is a palindrome.\n", num);
    }
    else
    {
        printf("The number %d is not a palindrome.\n", num);
    }
    return 0;
}