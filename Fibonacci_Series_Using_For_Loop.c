// Fibonacci Series : 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

#include <stdio.h>
int main()
{
    long int a = 0, b = 1, c;
    int d;
    printf("Enter the number:   ");
    scanf("%d", &d);
    for (int i = 0; i < d - 1; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    if (d == 1)
    {
        printf("The fibonacci number is 1");
    }
    else
    {
        printf("The Fibonacci is %ld", c);
    
    }
}