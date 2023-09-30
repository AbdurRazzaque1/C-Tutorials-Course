#include <stdio.h>
#include <string.h>

union student 
{
    int a;
    int marks;
    char name[20];
} khan, abdul;

int main()
{
    union student khan = {.a = 3};
    // union student abdul = {.a = 0};
    union student abdul = {.name = "Razzaque"};
    // union student khan = {.marks = 60};
    // union student abdul = {.a = 1};
    printf("The a of khan is %d\n", khan.a);
    printf("The name of abdul is %s\n", abdul.name);
    // printf("The marks of khan is %d\n", khan.a);
    printf("The size of union student is %d", sizeof(union student));
    return 0;

}