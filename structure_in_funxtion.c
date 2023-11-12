#include <stdio.h>
#include <string.h>

typedef struct Employee
{
    int empId;
    char *empName, *empAddress, *empPhoneNo;
    float empSalary;
} es;

es structure(es emp);

int main()
{
    es employee1 = structure(employee1);

    printf("the employee Id of the employee1 is %d\n\n", employee1.empId);
    printf("The name of employee1 is %s\n\n", employee1.empName);
    printf("The address of the employee1 is %s\n\n", employee1.empAddress);
    printf("The phone number of the employee1 is %s\n\n", employee1.empPhoneNo);
    printf("The salry of the employee1 is %.3f\n\n", employee1.empSalary);
    return 0;
}

es structure(es emp)
{
    emp.empId = 212321;
    emp.empName = "Khan Abdul Razzaque";
    emp.empAddress = "90 Feet road Ganesh nagar kandivali west mumbai 400067";
    emp.empPhoneNo = "7039782524";
    emp.empSalary = 24000.000;
    return emp;
}