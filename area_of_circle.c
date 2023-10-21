#include <stdio.h>
#include <math.h>

float eDistance(int, int, int, int);
float area_circle(int, int, int, int, float (*ptr)(int, int, int, int));

int main()
{
    int x1, x2, y1, y2;
    printf("Let's find the area of the circle.\n\n");

    printf("Enter X-cordinate of the first point(x1):  ");
    scanf("%d", &x1);

    printf("Enter Y-cordinate of the first point(y1):  ");
    scanf("%d", &y1);

    printf("Enter X-cordinate of the second point(x2):  ");
    scanf("%d", &x2);

    printf("Enter Y-cordinatre of the second point(y2):  ");
    scanf("%d", &y2);

    float (*ptr1)(int, int, int, int);                                             // Declaring a function pointer.
    ptr1 = &eDistance;                                                             // Assigning eDistance to the pointer.
    printf("\nThe distance between (%d , %d) and (%d , %d) is %.3f unit.\n\n", x1, y1, x2, y2, eDistance(x1, y1, x2, y2));
    printf("\nThe area of the circle with radius %.3f unit is %.4f unit sq.\n", ptr1(x1, y1, x2, y2), area_circle(x1, y1, x2, y2, ptr1)); // Calling area_circle's function.
    return 0;
}

float eDistance(int a, int b, int c, int d)
{
    float dist;
    dist = sqrt(pow(a - c, 2) + pow(b - d, 2));
    return dist;
}

float area_circle(int p, int q, int r, int s, float (*ptr)(int, int, int, int))
{
    const float PI = 3.1415;
    float area;
    area = PI * (pow((*ptr)(p, q, r, s), 2)); // Calling eDistabce's function.
    return area;
}