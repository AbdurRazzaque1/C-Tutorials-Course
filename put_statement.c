#include <stdio.h>
#include <string.h>

struct employee
{
    int impId;
    char name[20];
    char comName[20];
    char address[20];
};

int main()
{
    struct employee google[100];
    google[0].impId = 20;
    strcpy(google[0].name, "Abdul Razzaque Khan");
    // fputs(google[0].name, stdout);
    printf("The employee Id of %s is %d", google[0].name, google[0].impId);
    return 0;
}