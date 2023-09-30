// Fibonacci Series : 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

#include <stdio.h>

int fibseries(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fibseries(n - 1) + fibseries(n - 2));
    }
}
int main()
{
    int fib;
    printf("Enter a number:   ");
    scanf("%d", &fib);
    printf("The Fibonacci number is %d", fibseries(fib));
}