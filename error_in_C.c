#include <stdio.h>
#include <errors.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /* Start coding from here */
    FILE *ptr = NULL;
    ptr = fopen("abc.txt", "r");
    if (ptr == NULL)
    {
        printf("The error number is %d\n", errno);
        printf("The error expression is %s\n", strerror(errno));
    }
    return 0;
}