#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, count = 0;
    FILE *ptr = NULL;
    ptr = fopen("star_counting.txt", "r");
    char string[16300];
    fscanf(ptr, "%s", string);
    while (string[i] != '\0')
    {
        if ((strstr(&string[i], "*")== &string[i]))
        {
            count++;
            i++;
        }
    }
    printf("The number of stars is %d\n", count);
    return 0;
}