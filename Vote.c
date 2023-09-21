// To check whether a person can vote in an election or not.

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:\t");
    scanf("%d", &age);
    printf("You entered %d as your age\n", age);

    if (age >= 18)
    {
        printf("You can vote");
    }

    else
    {
        printf("You cannot vote");
    }

    return 0;
}