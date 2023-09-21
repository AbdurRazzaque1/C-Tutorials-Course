#include <stdio.h>

int main()
{
    int i , j;
    for (i = 0 , j = 1; j < 12; i++ , j++)
    {
        if (i==3)
        {
            printf("The value of i is %d\n" ,i);
            continue;
        }
        
        printf("%d %d\n", i , j);
    }

    return 0;
}