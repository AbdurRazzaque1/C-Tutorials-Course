// Program to check whether a string taken input from the user is a palindrome or not.

#include <stdio.h>
#include <string.h>

int main()
{
    char palindrome[100], temp[100], chr;

    printf("Enter an string to check the string is a palindrome or not:  ");
    fgets(palindrome, 100, stdin);

    strcpy(temp, palindrome); // copying aplindrome string in the temp.

    // Reversing the palindrome string.

    for (int i = 0; i < ((int)strlen(palindrome) - 1) / 2; i++)
    {
        chr = palindrome[i];
        palindrome[i] = palindrome[(int)strlen(palindrome) - (i + 2)];
        palindrome[(int)strlen(palindrome) - (i + 2)] = chr;
    }

    // Comparing the palindrome string and the temp string.
    if (strcmp(temp, palindrome) == 0)
    {
        printf("\n************The string is a palindrome.************\n");
    }
    else
    {
        printf("\n************The string is not a palindrome.************\n");
    }
    return 0;
}