/* Wright a program for unit coversion. Take value of one unit input from the user and Write a program to print the value of second unit. */

#include <stdio.h>

int main()
{
    char a, b, c;
    float Kilometers, Inches, Centimeters, Pounds, Inche;
start:
    printf("\nDo you want to perform unit conversion? [If 'Yes' Press 'Y'] , [If 'No' Press 'N']:  ");
    scanf("  %c", &a);
    while (1)
    {
        switch (a)
        {
        case 'Y':
        middle:
            printf("\n   Press 'A' to convert Kilometers to Miles.\n   Press 'B' to convert Inches to Foots.\n   Press 'C' to convert Centimeters to Inches.\n   Press 'D' to convert Pounds to Kilograms.\n   Press 'E' to convert Inches to Metres.\n   PRESS 'Q' TO QUIT THE PROGRAM.\n\n");
            scanf("  %c", &b);

            switch (b)
            {
            case 'A':
                printf("Enter in Kilometers:  ");
                scanf("%f", &Kilometers);
                printf("%.3f Kilometers = %.3f Miles\n\npress any key to perform more unit conversions:  ", Kilometers, Kilometers * 0.621371192);
                scanf("  %c", &c);
                break;

            case 'B':
                printf("Enter in Inches:  ");
                scanf("%f", &Inches);
                printf("%.3f Inches = %.3f Foots\n\npress any key to perform more unit conversions:  ", Inches, Inches * 0.0833333333);
                scanf("  %c", &c);
                break;

            case 'C':
                printf("Enter inCentimeters:  ");
                scanf("%f", &Centimeters);
                printf("%.3f Centimeters = %.3f inches\n\npress any key to perform more unit conversions:  ", Centimeters, Centimeters * 0.393700787);
                scanf("  %c", &c);
                break;

            case 'D':
                printf("Enter in Pounds:  ");
                scanf("%f", &Pounds);
                printf("%.3f Pounds = %.3f Kilograms\n\npress any key to perform more unit conversions:  ", Pounds, Pounds * 0.45359237);
                scanf("  %c", &c);
                break;

            case 'E':
                printf("Enter in Inche:  ");
                scanf("%f", &Inche);
                printf("%.3f Inche = %.3f Meters\n\npress any key to perform more unit conversions:  ", Inche, Inche * 0.0254);
                scanf("  %c", &c);
                break;

            case 'Q':
                printf("\nThankyou so much for using C program!\nKeep learning more and more\nHave a good day.\n");
                goto end;

            default:
                printf("\nYou have pressed a wrong key. Please press any one key from ['A', 'B', 'C', 'D', 'E', 'Q']\n");
                goto middle;
                break;
            }
            break;

        case 'N':
            printf("\nThankyou so much for using C program!\nKeep learning more and more\nHave a good day.\n");
            goto end;

        default:
            printf("You have pressed a wrong key. please press 'Y' or 'N'\n");
            goto start;
        }
    }
end:
    return 0;
}