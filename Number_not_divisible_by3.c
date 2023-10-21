#include <stdio.h>

int main()
{
    int i;
    printf("The numbers which are not divisible by three are:\n\n");
    for (i = 0; i < 10; i++)
    {
    start:
        if ((i + 1) % 3 == 0)
        {
            i++;
            goto start;
        }
        printf("%d\n\n", i + 1);
    }
    return 0;
}