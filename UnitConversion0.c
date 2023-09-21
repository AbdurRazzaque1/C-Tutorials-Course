#include <stdio.h>
float kmstomiles(float kms)
{
    return (kms * 0.621371192);
}
float inchestofoot(float inches)
{
    return (inches * 0.0833333333);
}
float cmstoinches(float cms)
{
    return (cms * 0.393700787);
}
float poundstokgs(float pound)
{
    return (pound * 0.45359237);
}
float inchestometers(float inch)
{
    return (inch * 0.0254);
}
int main()
{
    float a;
    int i;
    printf("To convert kilometer to mile press 1.\nTo convert inch to foot press 2.\nTo convert centimeter to inch press 3.\nTo convert pound to kilogram press 4.\nTo convert inch to meter press 5.\nOr press 6 to quit.\n\n");
    start:
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
        printf("%.3f kilometers is equal to %.3f miles\n", a, kmstomiles(a));
        goto start;
    case 2:
        printf("%.3f inches is equal to %.3f foots\n", a, inchestofoot(a));
        goto start;
    case 3:
        printf("%.3f centimeters is equal to %.3f inches\n", a, cmstoinches(a));
        goto start;
    case 4:
        printf("%.3f pounds is equal to %.3f kilograms\n", a, poundstokgs(a));
        goto start;
    case 5:
        printf("%.3f inches is equal to %.3f metres\n", a, inchestometers(a));
        goto start;
    case 6:
        printf("Thankyou for using C language !\nKeep learning more and more.\nHave a good day.");
        break;
    default:
        printf("You have prssed a wrong key. Please press rigt key");
        break;
    }
}