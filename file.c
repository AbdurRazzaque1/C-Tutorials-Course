#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *wordReplace(char *, char *, char *); // Function declaration that replace words from file string.

int main()
{
    FILE *file = NULL;
    char oldString[1000];
    char *finalString;
    file = fopen("letter.txt", "r");
    if (file != NULL)
    {
        fgets(oldString, 1000, file);
        printf("The old string is:\n\n%s\n\n", oldString);
        // calling to the function wordReplace
        finalString = wordReplace(oldString, "{{name}}", "Razzaque");              // Function calling
        finalString = wordReplace(finalString, "{{item}}", "Computer");            // Function calling
        finalString = wordReplace(finalString, "{{outlet}}", "A.R.K Electronics"); // Function calling

        printf("The final string is:\n\n%s", finalString);
    }
    else
    {
        printf("Unable to open the file");
    }

    return 0;
}

// Writing definition of the function WordReplace.

char *wordReplace(char *str, char *oldWord, char *newWord) // Function definition
{
    int i, count = 0;
    int length1 = strlen(oldWord), length2 = strlen(newWord); // lengths of old string and new string respectively.
    char *finalString;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            i += length1 - 1;
        }
    }
    finalString = (char *)malloc(i + count * length2); // Allocating memory to the finalString dynamially.

    i = 0;
    while (*str)
    {
        if (strstr(str, oldWord) == str)
        {
            strcpy(&finalString[i], newWord);
            i += length2;
            str += length1;
        }
        else
        {
            finalString[i] = *str;
            i++;
            str++;
        }
    }
    finalString[i] = '\0';
    return finalString;
}