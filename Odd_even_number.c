#include <stdio.h>
#include <string.h>

int main()
{
    char number[10];
    printf("Enter the number:   ");
    gets(number);
    char a = number[strlen(number) - 1];
    if ( a == '0' || a == '2' || a == '4' || a == '6' || a == '8')
    {
        printf("%s is an even number\n", number);
    }
    else
    {
        printf("%s is an odd number\n", number);
    }
    return 0;
}

// Aulternative way

/*
#include <stdio.h>

int main()
{
    int num, rem;
    printf("Enter the number:   ");
    scanf("%d", &num);
    rem = num % 10;
    if (rem == 0 || rem == 2 || rem == 4 || rem == 6 || rem == 8)
    printf("The number %d is an even number.", num);
    else
    printf("The number %d is an odd number.", num);
    return 0;
}
*/