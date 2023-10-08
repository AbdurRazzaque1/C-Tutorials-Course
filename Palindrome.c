#include <stdio.h>

int isPalindrome(int number);

int main()
{
    int num;
    printf("Enter the number:  ");
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("The number you entered is a palindrome.");
    else
        printf("The number you entered is not a palindrome.");
    return 0;
}
// The function below reverses the number. for e.g (123 to 321)
int isPalindrome(int number)
{
    int reverse = 0, remainder, temp = number;
    while (temp != 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    if (number == reverse)
        return 1;
    else
        return 0;
}