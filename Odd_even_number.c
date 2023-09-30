#include <stdio.h>
#include <string.h>

int main()
{
    char number[10];
    printf("Enter the number:   ");
    gets(number);
    int a = number[strlen(number) - 1];
    if ( a == '0' || a == '2' || a == '4' || a == '6' || a == '8')
    {
        printf("%s is an even number\n", number);
    }
    else
    {
        printf("%s irs an odd number\n", number);
    }
    return 0;
}