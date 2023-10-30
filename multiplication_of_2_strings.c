// multiplying two strings

#include <stdio.h>
#include <string.h>

void mul2Strings(char s1[], char s2[]);

int main()
{
    char str1[5], str2[5];
    printf("Enetr first string using (0 - 9):  ");
    scanf("%s", str1);
    printf("Enter second string using (0 - 9):  ");
    scanf("%s", str2);
    mul2Strings(str1, str2);
    return 0;
}

void mul2Strings(char s1[], char s2[])
{
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < (int)strlen(s1); i++)
    {
        switch (s1[i])
        {
        case '0':
            sum1 = sum1 * 10 + 0;
            break;
        case '1':
            sum1 = sum1 * 10 + 1;
            break;
        case '2':
            sum1 = sum1 * 10 + 2;
            break;
        case '3':
            sum1 = sum1 * 10 + 3;
            break;
        case '4':
            sum1 = sum1 * 10 + 4;
            break;
        case '5':
            sum1 = sum1 * 10 + 5;
            break;
        case '6':
            sum1 = sum1 * 10 + 6;
            break;
        case '7':
            sum1 = sum1 * 10 + 7;
            break;
        case '8':
            sum1 = sum1 * 10 + 8;
            break;
        case '9':
            sum1 = sum1 * 10 + 9;
            break;
        }
    }

    for (int i = 0; i < (int)strlen(s2); i++)
    {
        switch (s2[i])
        {
        case '0':
            sum2 = sum2 * 10 + 0;
            break;
        case '1':
            sum2 = sum2 * 10 + 1;
            break;
        case '2':
            sum2 = sum2 * 10 + 2;
            break;
        case '3':
            sum2 = sum2 * 10 + 3;
            break;
        case '4':
            sum2 = sum2 * 10 + 4;
            break;
        case '5':
            sum2 = sum2 * 10 + 5;
            break;
        case '6':
            sum2 = sum2 * 10 + 6;
            break;
        case '7':
            sum2 = sum2 * 10 + 7;
            break;
        case '8':
            sum2 = sum2 * 10 + 8;
            break;
        case '9':
            sum2 = sum2 * 10 + 9;
            break;
        }
    }
    if (s1[0] == '-')
    {
        sum1 = -sum1;
    }
    if (s2[0] == '-')
    {
        sum2 = -sum2;
    }
    printf("The multiplication of the two strings is %d", sum1 * sum2);
}