#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *wordReplace(char *, char *, char *);

int main()
{
    FILE *file = NULL;
    char oldString[200];
    char *finalString;
    file = fopen("letter.txt", "r");
    if (file != NULL)  
    {
        fgets(oldString, 200, file);
        printf("%s\n\n", oldString);
        finalString = wordReplace(oldString, "{{name}}", "Razzaque");
        finalString = wordReplace(finalString, "{{item}}", "Laptop");
        finalString = wordReplace(finalString, "{{outlet}}", "A.R.K Electronics");
        printf("%s\n\n", finalString);
    }
    else
    {
        printf("Unable to read the file");
    }
    fclose(file);
    return 0;
}

char *wordReplace(char *str, char *oldWord, char *newWord)
{
    int i, count = 0;
    int length1 = strlen(oldWord), length2 = strlen(newWord);
    char *finalString;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            i += length1 - 1;
        }
    }
    finalString = (char *) malloc(i + count * length2);

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