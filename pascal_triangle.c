#include <stdio.h>

int main()
{
    for (int i = 0; i < 8; i++)
    {
        for (int s = 0; s < (5 * (8 - (i + 1))); s++)
        {
            printf(" ");
        }

        int x = 1;

        for (int j = 0; j < i + 1; j++)
        {
            printf("%d         ", x);
            x = x * (i - j) / (j + 1);
        }
        printf("\n\n\n\n");
    }

    return 0;
}