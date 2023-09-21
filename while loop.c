// Printing a multiplication table of a number using while and do while loop.

#include <stdio.h>
int main()
{
    int i = 1 , table;
    printf("Enter a number to print the multiplication table of that number:    ");
    scanf("%d" , &table);
    printf("\nThe multiplication table of %d is:-\n\n" , table);
    while (i < 6)
    {
        printf("%d x %d = %d\n" , table , i , table*i);    // while loop prints 5 lines of the table
        i++;
    }
    do
    {
        printf("%d x %d = %d\n" , table , i , table*i);    // do while loop prints 5 lines of the table.
        i++;
    } while (i<11);
    

    return 0 ;
}