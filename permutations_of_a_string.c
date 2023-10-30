// lexicographically

#include <stdio.h>
#include <my_functions.h>

void num_of_permutations(char string[], int, int);

int main()
{
    char string[] = "ABDULR";
    for (int i = 0; i < (int)fact(6); i++)
    {
        if (i == 0)
        {
            printf("%s\n", string);
        }
        else if (i % (int)fact(5) == 0)
        {
            num_of_permutations(string, 0, 1);
        }
        else if (i % (int)fact(4) == 0)
        {
            num_of_permutations(string, 1, 2);
        }
        else if (i % (int)fact(3) == 0)
        {
            num_of_permutations(string, 2, 3);
        }
        else if (i % (int)fact(2) == 0)
        {
            num_of_permutations(string, 3, 4);
        }
        else
        {
            num_of_permutations(string, 4, 5);
        }
    }
    return 0;
}

void num_of_permutations(char string[], int a, int b)
{
    char temp;
    temp = string[a];
    string[a] = string[b];
    string[b] = temp;
    printf("%s\n", string);
}