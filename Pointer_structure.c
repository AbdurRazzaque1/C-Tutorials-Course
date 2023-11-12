#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    char address[50];
    int age;

} *ptr, student1[3] /*abdul*/;

int main()
{
    ptr = student1;

    for (int i = 0; i < 3; i++, ptr++)
    {
        // if (i == 3)  // To run this statement run the loop 4 times and create a structure variable abdul
        //     ptr = &abdul;
        printf("Enter the name of student:  ");
        scanf("%s", ptr->name);
        printf("Enter the address of the student:  ");
        scanf("%s", ptr->address);
        printf("Enter the age of the student:  ");
        scanf("%d", &ptr->age);

        printf("\n*******************************************\n\n");
    }

    ptr = student1;
    printf("### Displaying the information of all students ###\n");

    for (int i = 0; i < 3; i++, ptr++)
    {
        // if (i == 3)  // To run this statement run the loop 4 times and create a structure variable abdul
        //     ptr = &abdul;
        printf("\n*******************************************\n\n");
        printf("The name of the student is %s\n", ptr->name);
        printf("The address of the student is %s\n", (*ptr).address);
        printf("The age of the student is %d\n", ptr->age);
    }

    return 0;
}