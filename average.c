 #include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the number 1:   ");
    scanf("%d" , &a);
    printf("Enter the number 2:   ");
    scanf("%d" , &b);
    printf("Enter the number 3:   ");
    scanf("%d" , &c);
    float d = (a+b+c)/3;
    printf("The average is %f", d);
}