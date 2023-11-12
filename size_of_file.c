#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char string[4];
    FILE *mainFile = NULL, *tempFile = NULL;
    tempFile = fopen("C:\\users\\user3\\Desktop\\C Tutorials Course\\temp.txt", "a");
    fprintf(tempFile, "%s", "0");
    fclose(tempFile);

    tempFile = fopen("C:\\users\\user3\\Desktop\\C Tutorials Course\\temp.txt", "r");
    fgets(string, 2, tempFile);
    fclose(tempFile);

    tempFile = fopen("C:\\users\\user3\\Desktop\\C Tutorials Course\\temp.txt", "w");
    if (strcmp(string, "0") == 0)
    {
        mainFile = fopen("C:\\users\\user3\\Desktop\\C Tutorials Course\\size.txt", "a");
        while (1)
        {   // Appending the "This program is able to full your laptop's storage, So be careful." in the file size.txt.
            fprintf(mainFile, "%s", "This program is able to full your laptop's storage, So be careful.\n");
            i++;
            if (i == 10)
            {
                break;
            }
        }
        fclose(mainFile);
        fprintf(tempFile, "%s", "1");
    }
    else
    {
        mainFile = fopen("C:\\users\\user3\\Desktop\\C Tutorials Course\\size.txt", "w");
        fprintf(mainFile, "%s", "");
        fclose(mainFile);
        fprintf(tempFile, "%s", "0");
    }
    fclose(tempFile);
    return 0;
}