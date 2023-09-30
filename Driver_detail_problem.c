#include <stdio.h>
#include <string.h>

struct driver
{
    char name[20];
    char dlNo[15];
    char route[30];
    int kms;
};

int main()
{
    typedef struct driver dr;
    dr d1, d2, d3;
    printf("Enter the driver details:  \n\n");

    printf("Enter the details of first driver\n\n");
    printf("Enter name:  ");
    scanf("%19s", d1.name);
    printf("Enter driving license number:  ");
    scanf("%14s", d1.dlNo);
    printf("Enter route:  ");
    scanf("%29s", d1.route);
    printf("Enter kilometers:  ");
    scanf("%d", &d1.kms);

    printf("Enter the details of second driver\n\n");
    printf("Enter name:  ");
    scanf("%19s", d2.name);
    printf("Enter driving license number:  ");
    scanf("%14s", d2.dlNo);
    printf("Enter route:  ");
    scanf("%29s", d2.route);
    printf("Enter kilometers:  ");
    scanf("%d", &d2.kms);

    printf("Enter the details of thrd driver\n\n");
    printf("Enter name:  ");
    scanf("%19s", d3.name);
    printf("Enter driving license number:  ");
    scanf("%14s", d3.dlNo);
    printf("Enter route:  ");
    scanf("%29s", d3.route);
    printf("Enter kilometers:  ");
    scanf("%d", &d3.kms);

    printf("\n*****Printing the deyails of first drivers*****\n\n");
    printf("The name of first driver is %s\n", d1.name);
    printf("The DL no of first driver is %s\n", d1.dlNo);
    printf("The route of first driver is %s\n", d1.route);
    printf("The kilometers of first driver is %d\n", d1.kms);


    printf("\n*****Printing the deyails of second drivers*****\n\n");
    printf("The name of second driver is %s\n", d2.name);
    printf("The DL no of second driver is %s\n", d2.dlNo);
    printf("The route of second driver is %s\n", d2.route);
    printf("The kilometers of second driver is %d\n", d2.kms);


    printf("\n*****Printing the deyails of third drivers*****\n\n");
    printf("The name of third driver is %s\n", d3.name);
    printf("The DL no of third driver is %s\n", d3.dlNo);
    printf("The route of third driver is %s\n", d3.route);
    printf("The kilometers of third driver is %d\n", d3.kms);
    
    return 0;
}