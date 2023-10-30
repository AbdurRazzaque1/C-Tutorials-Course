#include <stdio.h>
#include <stdlib.h>
void inc_order(int *, int); // Function which prints the numbers in ascending order.
void dec_order(int *, int); // Function which prints the numbers in descending order.

/**********************************************************************************************************************************************************************************************************************************************************************************************************************/

int main()
{
    int n, *ascend;
    printf("How many numbers will you enter:  ");
    scanf("%d", &n);
    printf("\nOK, No problem !\n\n");
    ascend = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d:  ", i + 1);
        scanf("%d", &ascend[i]);
    }
    inc_order(ascend, n);
    printf("\n\n");
    dec_order(ascend, n);
    free(ascend);
    return 0;
}

/**********************************************************************************************************************************************************************************************************************************************************************************************************************/

void inc_order(int *nums, int n)
{
    int *ptr, num, temp, a;
    for (int i = 0; i < n; i++)
    {
        num = nums[i];
        ptr = &nums[i + 1];
        for (int j = 0; j < n - (1 + i); j++)
        {
            if (*ptr < num)
            {
                num = *ptr;
                a = j;
                ptr++;
                continue;
            }
            ptr++;
        }
        if (num < nums[i])
        {
            temp = nums[i];
            nums[i] = num;
            nums[a + i + 1] = temp;
        }
    }
    printf("All the numbers are arranged in ascending order:\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", nums[i]);
    }
}

/**********************************************************************************************************************************************************************************************************************************************************************************************************************/

void dec_order(int *nums, int n)
{
    int *ptr, num, temp, a;
    for (int i = 0; i < n; i++)
    {
        num = nums[i];
        ptr = &nums[i + 1];
        for (int j = 0; j < n - (1 + i); j++)
        {
            if (*ptr > num)
            {
                num = *ptr;
                a = j;
                ptr++;
                continue;
            }
            ptr++;
        }
        if (num > nums[i])
        {
            temp = nums[i];
            nums[i] = num;
            nums[a + i + 1] = temp;
        }
    }
    printf("All the numbers are arranged in descending order:\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", nums[i]);
    }
}