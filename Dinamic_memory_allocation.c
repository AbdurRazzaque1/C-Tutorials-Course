#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    char *emp;
    printf("How many character are there in your employee Id:  ");
    scanf("%d", &n);
    emp = (char *)malloc((n + 1) * sizeof(char));  // Reserve the memory during runtime.  (n + 1) because the string needs one extra space for NULL character
    getchar();
    printf("Enter your employee Id no:  ");
    gets(emp);
    puts(emp);

    printf("How many character are there in your employee Id:  ");
    scanf("%d", &n);
    emp = (char *)realloc(emp, (n + 1) * sizeof(char));   // Reserve the memory during runtime.
    getchar();
    printf("Ente your empoyee Id no:  ");
    gets(emp);
    puts(emp);

    printf("How many character are there in your employee Id:  ");
    scanf("%d", &n);
    emp = (char *)realloc(emp, (n + 1) * sizeof(char));   // Reserve the memory during runtime.
    getchar();
    printf("Enter your employee Id no:  ");
    gets(emp);
    puts(emp);

    free(emp);    // It will free the reserved memory

    return 0;
}

// Use of malloc
// int *ptr;
// ptr = (int *)malloc(3 * sizeof(int));
// for (int i = 0; i < 3; i++)
// {
//     printf("Enter the number %d of this array\n", i);
//     scanf("%d", &ptr[i]);
// }
// for (int i = 0; i < 3; i++)
// {
//     printf("Enter the number %d of this array\n", ptr[i]);
// }