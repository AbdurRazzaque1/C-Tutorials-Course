#include <stdio.h>

void exiOfChar(char str[], char b);

int main()
{
    char string[] = "my name is khan abdul razzaque. whats your name?";
    char c = 'j';
    exiOfChar(string, c);
    // int a = occOfVowel(numVowel);
    // printf("The number of vowel in the string are %d", a);
    return 0;
}

void exiOfChar(char str[], char b)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == b)
        {       
            printf("The character %c is present in the string.", b);
            return;
        }

    }
    printf("The character %c is not present in \"%s\".", b, str);
}






// int occOfVowel(char str[])
// {
//     int vowel =0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         char a = str[i];
//         if (a == 'a' || a == 'e' || a== 'i' || a == 'o' || a == 'u')
//         {
//             vowel++;
//         }
//     }
//     return vowel;
// }