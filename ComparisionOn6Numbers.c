// Compare between six numbers by taking input from the user

#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j;
    printf("Note, at least one number should be distinct.\n\n");
    printf("Enter the first number:    ");
    scanf("%d", &a);
    printf("Enter the second number:    ");
    scanf("%d", &b);
    printf("Enter the third number:    ");
    scanf("%d", &c);
    printf("Enter the fourth number:    ");
    scanf("%d", &d);
    printf("Enter the fifth number:    ");
    scanf("%d", &e);
    printf("Enter the sixth number:    ");
    scanf("%d", &f);

    if (a>b)
    {
        g = a;
    }
    else
    {
        g = b;
    }

    if (c>d)
    {
        h = c;
    }
    else{
        h = d;
    }

    if (e>f)
    {
        i = e;
    }
    else
    {
        i = f;
    }

    if (g>h)
    {
        j = g;
    }
    else
    {
        j = h;
    }

    if (i>j)
    {
        printf("\nThe greatest number is %d" ,i);
    }
    else
    {
        printf("\nThe greatest number is %d" ,j);
    }

    return 0;
}