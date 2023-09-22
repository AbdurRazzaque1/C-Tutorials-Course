#include <stdio.h>
int main()
{
    float a;
    int i;
    printf("To convert kilometer to mile press 1.\nTo convert inch to foot press 2.\nTo convert centimeter to inch press 3.\nTo convert pound to kilogram press 4.\nTo convert inch to meter press 5.\nOr press 6 to quit.\n\n");
    printf("\nPress the key that you have chosen:\t");
    scanf("%d", &i);
    if (0<i && i<6)
    {
        printf("Enter the number which you want to convert:\t");
        scanf("%f", &a);
    }
    switch (i)
    {
    case 1:
        printf("%.3f kilometers is equal to %.3f miles\n", a, a * 0.621371192);
        break;
    case 2:
        printf("%.3f inches is equal to %.3f foots\n", a, a * 0.0833333333);
        break;
    case 3:
        printf("%.3f centimeters is equal to %.3f inches\n", a, a *  0.393700787);
        break;
    case 4:
        printf("%.3f pounds is equal to %.3f kilograms\n", a, a * 0.45359237);
        break;
    case 5:
        printf("%.3f inches is equal to %.3f metres\n", a, a * 0.0254);
        break;
    case 6:
        printf("Thankyou for using C language !\nKeep learning more and more.\nHave a good day.");
        goto end;
    default:
        printf("You have pressed a wrong key. If you want to perform unit conversion then RUN the program again. but this time, Do not press any wrong key.");
    }
    end:
    return 0;
}
