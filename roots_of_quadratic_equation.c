#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, disc;
    float root1, root2;
    printf("Enter coefficient of X^2:  ");
    scanf("%d", &a);
    printf("Enter the coefficient of x:  ");
    scanf("%d", &b);
    printf("Enter the constant term:  ");
    scanf("%d", &c);


    // Finding the discriminant of the eqaution
    disc = pow(b, 2) - 4 * a * c;


    //  Finding roots depending on discriminant

    if (disc > 0) //   real and unequal
    {
        root1 = (-b + sqrt(disc))/(2 * a);
        root2 = (-b - sqrt(disc))/(2 * a);
        printf("The Roots of the equation are %.3f and %.3f", root1, root2);
    }



    else if (disc == 0) //   real and equal
    {
        root1 = root2 = (float)(-b)/(2 * a);
        printf("The Roots of the equation are %.3f and %.3f", root1, root2);
    }



    else //   not real
    {
        printf("The Roots of the equation are %.2f + %.2fi and %.2f - %.2fi", (float)(-b)/(2 * a), sqrt(-disc)/(2 * a), (float)(-b)/(2 * a), sqrt(-disc)/(2 * a));
    }


    return 0;
}