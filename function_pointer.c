#include <stdio.h>

int c_area();
int sum();

int main()
{
    int (*fptr)() = NULL; // This ia a function pointer.
    fptr = &c_area;       // pointer points the fucntion c_area
    printf("The area of the circle is %d\n\n", (*fptr)());
    // fptr = &sum; // pointer points the fucntion sum
    // printf("The sum is %d\n\n", (*fptr)());
    // fptr = &c_area; // pointer points the fucntion c_area
    // printf("The address of the function c_area is %p\n", fptr);
    // fptr = &sum; // pointer points the fucntion sum
    // printf("The address of the function sum is %p", fptr);
    return 0;
}
// Function that calcultes the area of the circle.
int c_area()
{
    const float pi = 3.1415;
    int r;
    printf("Enter the radius of the circle:  ");
    scanf("%d", &r);
    return (pi * r * r) * sum();
}
// Function that calculares the sum of two numbers.
int sum()
{
    int a, b;
    printf("Enter the first number:  ");
    scanf("%d", &a);
    printf("Enetr the second number:  ");
    scanf("%d", &b);
    return (a + b);
}

// #include <stdio.h>

// int sum(int (*ptr)())
// {
//     // printf("The average of 4, 3 and 8 is %d", (4+3+8)/3);
//     // printf("The sum of 3 and 4 is %d", 7);
//     return 3 + 5;
// }

// int average(int (*ptr1)())
// {
//     printf("The sum of 3 and 4 is %d", (*ptr1)());
//     printf("The average of 4, 3 and 8 is %d", (4+3+8)/3);
//     return 0;
// }
// int main()
// {
//     int (*ptr)();
//     ptr = sum;
//     average(ptr);

// }