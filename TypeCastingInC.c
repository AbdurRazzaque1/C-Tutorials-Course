#include <stdio.h>

// Type Casting Syntax:
// (Type) value

int main ()
{
   int a;
    printf("We can typecast of any value by writting [(type that we want) value]\n");
printf("Enter the number:   ");
scanf("%d" ,&a);
printf("The number you entered is %c", (char)a);
printf("The actual value is %f", (float)a);
}