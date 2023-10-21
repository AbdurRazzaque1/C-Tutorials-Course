#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    long long int i = 0;
    while (i < 101)
    {
        printf("My name is khan Abduk Razzaque\n");
        ptr = (int *)malloc(10000 * sizeof(double));
        if (ptr == NULL)
        {
            printf("The pointer is a null pointer.");
        }
        if (i % 100 == 0)
        {
            i = 0;
            getchar();
        }
        i++;
        free(ptr);  // it is very necessary
    }
    return 0;
}