// Rock-Paper-Scissor Game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char comp, you;
    int win = 0;
    char name[30];
    srand(time(NULL));
    printf("Welcome! What's your name:  ");
    gets(name);
    printf("Hey %s, welcome to Rock-Paper-scissor Game.\n\n", name);
    printf("Press R stands for \"Rock\"\nPress P stands for \"Paper\"\nPress S stands for \"Scissor\"\n\n");
    // getchar(); // Consumes new line character leaves by input buffer.

    while (1)
    {
        int c = rand() % 3;
        printf("TO EXIT, WIN THE GAME THREE TIMES IN A ROW.\n");
        // printf("You have won %d times in a row\n\n", win);
        if (c == 0)
            comp = 'R';
        else if (c == 1)
            comp = 'P';
        else
            comp = 'S';
        printf("%s, your tern:  ", name);
        scanf("%c", &you);
        printf("Computer's tern: %c\n", comp);
        getchar();     // Consumes new line character leaves by input buffer.
        if (comp == 'R')
        {
            if (you == 'r' || you == 'R')
                printf("\nThe game is a tie.\n\n");
            else if (you == 'p' || you == 'P')
            {
                printf("\nCongratulations! You win.\n\n");
                win++;
            }
            else if (you == 's' || you == 'S')
            {
                printf("\nSorry You lose.\n\n");
                win = 0;
            }
            else
            printf("\nWrong choise? Please choose a valid character\n\n");
        }

        else if (comp == 'P')
        {
            if (you == 'r' || you == 'R')
            {
                printf("\nSorry You lose.\n\n");
                win = 0;
            }
            else if (you == 'p' || you == 'P')
                printf("\nThe game is a tie.\n\n");
            else if (you == 's' || you == 'S')
            {
                printf("\nCongratulations! You win.\n\n");
                win++;
            }
            else
            printf("\nWrong choise? Please choose a valid character\n\n");
        }

        else
        {
            if (you == 'r' || you == 'R')
            {
                printf("\nCongratulations! You win.\n\n");
                win++;
            }
            else if (you == 'p' || you == 'P')
            {
                printf("\nSorry You lose\n\n");
                win = 0;
            }
            else if (you == 's' || you == 'S')
                printf("\nThe game is a tie\n\n");
            else
            printf("\nWrong choise? Please choose a valid character\n\n");        
        }

        if (win == 3)
        {
            printf("############Congratulations %s! You won the game three times in a row.#############\n\n", name);
            printf("Do you want to exit the game?\n{press \"Y\" for 'yes' OR press \"N\" for 'no'}:  ");
            scanf("%c", &comp);
            getchar();
            if (comp == 'y' || comp == 'Y')
            {
                printf("Ok, The game is going to exit ...\n");
                break;
            }
            else if (comp == 'n' || comp == 'N')
            {
                printf("Ok, The game will not exit now.\n\n");
                win = 0;
            }
        }
    }
    return 0;
}