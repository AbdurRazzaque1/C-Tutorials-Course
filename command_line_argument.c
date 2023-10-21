#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);
    if (strcmp(operation, "add") == 0)
    {
        printf("The sum of %d and %d is %d", num1, num2, num1 + num2);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("The absolute difference of %d and %d is %d", num1, num2, num1 - num2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("The product of %d and %d is %d", num1, num2, num1 * num2);
    }
    else if (strcmp(operation, "divide") == 0)
    {
        printf("The division of %d by %d is %d", num1, num2, num1 / num2);
    }
    else
    {
        printf("Enter a valid command.");
    }
    return 0;
}
