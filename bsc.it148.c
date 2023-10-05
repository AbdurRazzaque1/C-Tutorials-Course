#include<stdio.h>
int main()
{
    int i,j, num;
    while(1)
    {
        printf("Enter a number to check wheather the number is prime or composite: ");
        scanf("%d", &num);
        getchar();
        for (i = 1,j=0; i <= num; i++)
        {
            if(num % i==0)
            {
                j++;
            }
            if (j==3)
            {
                break;
            }
            
        }
        if(j==2)
        {
            printf("The number %d is a prime number\n",num);
        }
        else if(j==0 || num==0)
        {
            printf("the number is not positive. please enter a positive number\n");
        }
        else if(num==1)
        {
            printf("the number %d is neighter prime nor composite\n",num);
        }
        else
        {
            printf("the number %d is composite\n",num);
        }
        

    }

}