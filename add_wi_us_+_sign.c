#include <stdio.h>

int main()
{
    int a = 10, b = 15;
    printf("The sum of a and b is %d\n", -(-a - b));
    printf("The sum of a and b is %d\n", (a - (-b)));
    return 0;
}