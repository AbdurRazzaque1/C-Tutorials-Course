// Compare betwen three numbers by taking each number input from the user.

#include<stdio.h>

int main()
{
    int a, b, c, d, e, f;
    printf("Enter first integer number:   ");
    scanf("%d", &a);
    printf("Enter second integer number:   ");
    scanf("%d", &b);
    printf("Enter third integer number:    ");
    scanf("%d", &c);
    printf("Enter fourth integer number:    ");
    scanf("%d", &d);
    
    if (a>b)
    {
        e = a;
    }
    else
    {
        e = b;
    }

    if (c>d)
    {
        f = c;
    }
    else
    {
        f = d;
    }

    if (e>f)
    {
        printf("The reater number is %d" , e);
    }
    else
    {
        printf("The greater number is %d" , f);
    }
    return 0;
}