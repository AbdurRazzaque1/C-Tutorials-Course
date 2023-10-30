// To check a number is abundant or not.

/*

Abundent numbers:-->
An abundent number is a positive integer N for which the sum of divisors of N is greater then N

*/

#include <stdio.h>

int main()
{
	int num, sum = 0;
	printf("Enter a number to check whether the number is abundant number or not:  ");
	scanf("%d", &num);
	for (int i = 0; i < num - 1; i++)
	{
		if (num % (i + 1) == 0)
		{
			sum += (i + 1);
		}
	}
	if (sum > num )
	{
		printf("The number is an abundant number.");
	}
	else
	{
		printf("The number is not an abundant number.");
	}

	return 0;
}