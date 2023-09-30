#include <stdio.h>

void func1(int *address1, int *address2)
{
    int c = *address1 + *address2;
    int d = *address1 - *address2;
    *address1 = c;
    *address2 = d;
}

int main()
{
    int a = 20, b = 11;
    printf("The value of a is %d and the value of b is %d.\n", a, b);
    func1(&a, &b);
    printf("After calling function by referece.\nThe value of a is %d and the value of b is %d.", a, b);
    return 0;
}