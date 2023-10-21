// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <my_functions.h>
// int main()
// {
//     int num1, num2, n, dAD;
//     char str[2];
//     char *number = NULL;
//     printf("Enter the dividend:  ");
//     scanf("%d", &num1);
//     printf("Enter the divisor:  ");
//     scanf("%d", &num2);
//     printf("How many digits do you want after decimal:  ");
//     scanf("%d", &n);
//     dAD = num1 / num2;
//     int j = 0;
//     if (dAD == 0)
//         j = 1;
//     while (dAD != 0)
//     {
//         dAD /= 10;
//         j++;
//     }
//     number = (char *)malloc((n + j + 2) * sizeof(char));
//     sprintf(number, "%d", num1 / num2);
//     if (n != 0)
//     {
//         strcat(number, ".");
//     }
//     dAD = num1 % num2;
//     for (int i = 0; i < n; i++)
//     {
//         dAD *= 10;
//         sprintf(str, "%d", dAD / num2);
//         strcat(number, str);
//         dAD %= num2;
//     }
//     printf("The sum of first 100 natural numbers is %d\n\n", add(100));
//     printf("The resultant number with %d digits after decimal is = %s\n", n, number);
//     printf("The factorial of 5 is %lu", fact(5));
//     free(number);
//     return 0;
// }
// #include <stdio.h>
#include <my_functions.h>

int main()
{
    info();
    starp();
    return 0;
}