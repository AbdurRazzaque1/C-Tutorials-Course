/*Example of do-while loop.
It will print numbers from 1 to what user enter. like this
1
2
3
.
.   */

#include <stdio.h>

int main()
{
    int a;
    int b = 0;
    printf("Enter a number:\t");
    scanf("%d", &a);  // This line will take input from the user.

    do          //  Loop starts from here. and
    {
        printf("%d\n", b+1);
        b = b + 1;
    } while (b < a);   // End here.

    printf("It is not working properly");

    return 0;

}