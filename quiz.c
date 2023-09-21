#include <stdio.h>

int main()
{
    int M;
    int S;

    printf("If yes then type '1' else type '0'\n\n");

    printf("Have you passed the maths exam? \t");
    scanf("%d", &M); // Taking input from the user

    printf("Have you passed the science exam? \t");
    scanf("%d", &S); // Taking input from the user

    if ((M == 1) && (S == 1))
    {
        printf("You are given a gift of 45 rupees.");
    }

    else if ((M == 1) && (S == 0))
    {
        printf("You are given a gift of 15 rupees.");
    }

    else if ((M == 0) && (S == 1))
    {
        printf("You are given a gift of 15 rupees.");
    }

    else
    {
        printf("Sorry, You have not passed any of the exam. You are not given any gift.");
    }

    return 0;
}