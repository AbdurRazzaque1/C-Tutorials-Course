#include <stdio.h>

int main()
{
    int arr[6], i;
    for (i = 0; i < 6; i++)
    {
        printf("Enter the number %d:   ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 6; i++)
    {
        printf("The number is %d\n", arr[5 - i]);
    }
    return 0;
}

/*
int* ptr;     this is a pointer
void* ptr;    this is a void pointer
void* ptr = NULL;  this is a NULL pointer
int a = 3;
int* ptr = &a;
for some reason a is deleted then the pointer ptr becomes a hanging pointer
int* ptr;    this is a wild pointer
*/