#include <stdio.h>
#include <string.h>

void arrayrev(int arra[])
{
    int a;
    for (int i = 0; i <= 4; i++)
    {
        a = arra[i];
        arra[i] = arra[8 - i];
        arra[8 - i] = a;
    }
}

int main()
{
    int arra[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("before revesing:\n");
    for (int j = 0; j <= 8; j++)
    {
        printf("%d\n", arra[j]);
    }
    arrayrev(&arra[0]);
    printf("after reversing:\n");
    for (int k = 0; k <= 8; k++)
    {
        printf("%d\n", arra[k]);
    }

    return 0;
}