#include <stdio.h>
#include <string.h>

int main()
{
    char number[100];
    printf("Enter a number:  ");
    gets(number);
    for (int i = 0; i < (int)strlen(number); i++)
    {
        if (number[i] == '0')
        {
            number[i] = '1';
        }
        else if (number[i] == '1')
        {
            number[i] = '0';
        }
    }
    printf("The number is %s", number);
    return 0;
}

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int N, ans = 0, i = 0;
//     printf("Enter an integer:  ");
//     scanf("%d", &N);
//     if (N == 0)
//     {
//         printf("The number after replacing 0's to 1's is 1");
//     }
//     else
//     {
//         while (N != 0)
//         {
//             if (N % 10 == 0)
//             {
//                 ans = ans + 1 * pow(10, i);
//             }
//             else
//             {
//                 ans = ans + (N % 10) * pow(10, i);
//             }
//             N /= 10;
//             i++;
//         }
//     }
//     printf("The number after replacing 0's to 1's is %d", ans);
//     return 0;
// }
