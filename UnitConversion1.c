#include <stdio.h>
int main()
{
    int choices;
    float kilometers, miles, inches, foot, centimeters, pounds, kgs, meters;
    char ch;
    printf("Enter 'Y' if you want to perform conversions: \n");
    printf("Enter 'N' if you donot want to perform conversions: \n");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'Y':
        printf("Hi, Lets perform the conversions of units: \n");
        printf("Enter 1 to convert kilometers to miles: \n");
        printf("Enter 2 to convert inches to foot: \n");
        printf("Enter 3 to convert centimeters to inches: \n");
        printf("Enter 4 to convert pounds to kgs: \n");
        printf("Enter 5 to convert inches to meters : \n");
        scanf("%d", &choices);
        switch (choices)
        {
        case 1:
            printf("Enter kilometers: \n");
            scanf("%f", &kilometers);
            miles = kilometers * 0.621371;
            printf("It is converted to miles at:  %f\n", miles);
            break;
        case 2:
            printf("Enter inches: \n");
            scanf("%f", &inches);
            foot = inches * 0.08333;
            printf("It is converted to foot at: %f\n", foot);
            break;
        case 3:
            printf("Enter centimeters: \n");
            scanf("%f", &centimeters);
            inches = centimeters * 0.393701;
            printf("It is converted to inches at: %f\n", inches);
            break;
        case 4:
            printf("Enter pounds: \n");
            scanf("%f", &pounds);
            kgs = pounds * 0.453592;
            printf("It is converted to kgs at: %f\n", kgs);
            break;
        case 5:
            printf("Enter inches: \n");
            scanf("%f", &inches);
            meters = inches * 39.37;
            printf("It is converted to meters at: %f\n", meters);
            break;
        default:
            printf("!!Wrong choice!! \n");
            break;
        }
        main();
        break;
    case 'N':
        printf("You decided not to convert anything. \n");
        printf("Thanks for visit.\nHave a Nice Day!\n");
        break;
    default:
        printf("You Entered a Wrong Character!\n");
        break;
    }
    return 0;
}