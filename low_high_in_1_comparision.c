// Checkimg a number is in the range [low, high] or not using one comparision only.

#include <stdio.h>

int main()
{
    int high = 100, low = 10, x;

    printf("Enter anumber to check the number is in range [10,100] or not:  ");
    scanf("%d", &x);

    if (((x - low)*(high -x)) >= 0)
    {
        printf("The number you entered is in the range [10,100].");
    }
    else
    {
        printf("The number you entered is not in the range [10,100]");
    }
    return 0;
}