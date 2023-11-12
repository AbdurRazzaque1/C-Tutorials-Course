/**************************************************************************************************/
/* Header files used in this program */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**************************************************************************************************/
/* Funtioons used in this program */

void O_and_X();
void print(char value[]);
void how_to_play();
int swapcell(int *a, int *b, int *ptr);
int right(int a, int b, int c, char *val, char *ptr);
void playmove(int *a, int b, char *cmpmove, char *playermove, char *ptr);
int func(int loopstart, int loopEnd, int loopIncrement, int a, int b, char *symbol, char *cmpmove, char *ptr1, int *ptr2);

/**************************************************************************************************/

// Function that plays the "tic tac toe" game
void O_and_X()
{
    char value[] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'}; // This is the structure of "tic tac toe" game.
    int ticNo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("************************************************************************\n");
    printf("Let's play the game nammed \"tic tac toe\"\n");
    printf("If you don't know how to play this game, you can enter I (info)\n");
    printf("************************************************************************\n\n");

    char player; /* This variable holds the value of the player */
    char cmp;    /* This variable holds the value of computer */
    int fs;      // This variable holds the player choise first or second.
    int cellNo;  // This variable holds the cell number in which user wants to put the value.
    int randNo;  // This variable helps the computer to choose the cell number.
    int i = 0;   // This vsrisble is used to control the loop.
    srand(time(NULL));

    playAgain:
    printf("Press enter key to start the game . . .");
    getchar();
    printf("\n");
    printf("ENTER 0 TO QUIT THE GAME.\n");
    printf("Which symbol you want to play your move (O OR X) :  ");
    scanf("%c", &player);
    if (player == '0')
    {
        printf("\nOk, the game is going to quit.\n");
        return;
    }
    else if (player == 'I')
    {
        how_to_play();
        return;
    }

    printf("press 1 for first move or press 2 for second move:  ");
    scanf("%d", &fs);
    getchar();
    printf("\n");
    if (fs == 0)
    {
        printf("\nOk, the game is going to quit.\n");
        return;
    }

    if ((player == 'O' || player == 'X') && fs == 1)
    {
        if (player == 'O')
            cmp = 'X';
        else if (player == 'X')
            cmp = 'O';

        while (1)
        {
            if (i > 0)
                printf("ENTER 0 TO QUIT THE GAME.\n\n");

            printf("Choose a cell number from (1-9) to play your move:  ");
            scanf("%d", &cellNo);
            getchar();
            if (value[cellNo - 1] == '-')
            {
                // Complete this function to make the game playable.

                playmove(&cellNo, -1, &cmp, &player, value);
                swapcell(&cellNo, NULL, ticNo);

                randNo = rand() % (8 - (2 * i + 1));
                if (ticNo[1] != 0)
                {
                    if (func(0, 8, 3, 1, 2, &cmp, &cmp, value, ticNo))
                        goto here;
                    if (func(0, 3, 1, 3, 6, &cmp, &cmp, value, ticNo))
                        goto here;
                    if (func(0, 1, 1, 4, 8, &cmp, &cmp, value, ticNo))
                        goto here;
                    if (func(2, 3, 1, 2, 4, &cmp, &cmp, value, ticNo))
                        goto here;

                    if (func(0, 8, 3, 1, 2, &player, &cmp, value, ticNo))
                        goto here;
                    if (func(0, 3, 1, 3, 6, &player, &cmp, value, ticNo))
                        goto here;
                    if (func(0, 1, 1, 4, 8, &player, &cmp, value, ticNo))
                        goto here;
                    if (func(2, 3, 1, 2, 4, &player, &cmp, value, ticNo))
                        goto here;

                    fs = swapcell(NULL, &randNo, ticNo);
                    playmove(NULL, fs, &cmp, &player, value);
                    printf("************************************************************************\n\n");

                }

                here:
                fs = right(0, 1, 2, &cmp, value) || right(3, 4, 5, &cmp, value) || right(6, 7, 8, &cmp, value) || right(0, 3, 6, &cmp, value) || right(1, 4, 7, &cmp, value) || right(2, 5, 8, &cmp, value) || right(0, 4, 8, &cmp, value) || right(2, 4, 6, &cmp, value);

                randNo = right(0, 1, 2, &player, value) || right(3, 4, 5, &player, value) || right(6, 7, 8, &player, value) || right(0, 3, 6, &player, value) || right(1, 4, 7, &player, value) || right(2, 5, 8, &player, value) || right(0, 4, 8, &player, value) || right(2, 4, 6, &player, value);

                if (randNo)
                {
                    printf("****** Congratulations you have won the game. ******\n");
                    break;
                }
                if (fs)
                {
                    printf("****** Sorry computer has won the game. ******\n");
                    break;
                }

                if (swapcell(NULL, NULL, ticNo))
                {
                    printf("****** The game is a draw. ******\n");
                    break;
                }
                i++;
            }
            else if (value[cellNo - 1] == 'O' || value[cellNo - 1] == 'X')
            {
                printf("\nSorry! choose another cell number, becouse cell number %d is not empty.\n\n", cellNo);
            }
            else if (cellNo == 0)
            {
                printf("\nOk, the game is going ti quit.\n");
                break;
            }
            else
            {
                printf("\nPlease enter a number between 1 to 9.\n\n");
            }
        }
    }
    else if ((player == 'O' || player == 'X') && fs == 2)
    {
        if (player == 'O')
            cmp = 'X';
        else if (player == 'X')
            cmp = 'O';

        while (1)
        {
            if (i == 0)
                randNo = rand() % (8 - (2 * i));
            else
                randNo = rand() % (8 - (2 * i + 1));
            
            if (ticNo[0] != 0)
            {
                if (func(0, 8, 3, 1, 2, &cmp, &cmp, value, ticNo))
                    goto there;
                if (func(0, 3, 1, 3, 6, &cmp, &cmp, value, ticNo))
                    goto there;
                if (func(0, 1, 1, 4, 8, &cmp, &cmp, value, ticNo))
                    goto there;
                if (func(2, 3, 1, 2, 4, &cmp, &cmp, value, ticNo))
                    goto there;

                if (func(0, 8, 3, 1, 2, &player, &cmp, value, ticNo))
                    goto there;
                if (func(0, 3, 1, 3, 6, &player, &cmp, value, ticNo))
                    goto there;
                if (func(0, 1, 1, 4, 8, &player, &cmp, value, ticNo))
                    goto there;
                if (func(2, 3, 1, 2, 4, &player, &cmp, value, ticNo))
                    goto there;

                fs = swapcell(NULL, &randNo, ticNo);
                playmove(NULL, fs, &cmp, &player, value);
            }

            there:
            printf("************************************************************************\n\n");
            fs = right(0, 1, 2, &cmp, value) || right(3, 4, 5, &cmp, value) || right(6, 7, 8, &cmp, value) || right(0, 3, 6, &cmp, value) || right(1, 4, 7, &cmp, value) || right(2, 5, 8, &cmp, value) || right(0, 4, 8, &cmp, value) || right(2, 4, 6, &cmp, value);
            if (fs)
            {
                printf("****** Sorry computer has won the game. ******\n");
                break;
            }
            if (swapcell(NULL, NULL, ticNo))
            {
                printf("****** The game is a draw. ******\n");
                break;
            }

            reEnter:
            if (i > 0)
                printf("ENTER 0 TO QUIT THE GAME.\n\n");

            printf("Choose a cell number from (1-9) to play your move:  ");
            scanf("%d", &cellNo);
            getchar();

            if (value[cellNo - 1] == '-')
            {
                if (ticNo[0] != 0)
                {
                    playmove(&cellNo, -1, &cmp, &player, value);
                    swapcell(&cellNo, NULL, ticNo);
                }

                randNo = right(0, 1, 2, &player, value) || right(3, 4, 5, &player, value) || right(6, 7, 8, &player, value) || right(0, 3, 6, &player, value) || right(1, 4, 7, &player, value) || right(2, 5, 8, &player, value) || right(0, 4, 8, &player, value) || right(2, 4, 6, &player, value);

                if (randNo)
                {
                    printf("****** Congratulations you have won the game. ******\n");
                    break;
                }
                i++;
            }
            else if (value[cellNo - 1] == 'O' || value[cellNo - 1] == 'X')
            {
                printf("\nSorry! choose another cell number, becouse cell number %d is not empty.\n\n", cellNo);
                goto reEnter;
            }
            else if (cellNo == 0)
            {
                printf("\nOk, the game is going to quit.\n");
                break;
            }
            else
            {
                printf("\nPlease enter a number between 1 to 9.\n\n");
                goto reEnter;
            }
            
            if ((value[cellNo - 1]  == '-' || value[cellNo - 1] == cmp) && value[cellNo - 1] != player)
            {
                goto reEnter;
            }
        }
    }
    else
    {
        printf("\nMaybe, You have entered an invalid input.\n");
        printf("Check your input and make your input correct then try again.\n\n");
        goto playAgain;
    }
}

/**************************************************************************************************/

// This funtion manages occupied celll number and the cell number has to occupied
int swapcell(int *a, int *b, int *ptr)
{
    static int st = 0;
    int c;
    if (a != NULL)
    {
        for (int i = 0; ; i++)
        {
            if (ptr[i] == *a)
            {
                ptr[i] = ptr[8 - st];
                ptr[8 - st] = 0;
                break;
            }
        }
        st++;
    }

    if (b != NULL)
    {
        c = ptr[*b];
        ptr[*b] = ptr[8 - st];
        ptr[8 - st] = 0;
        st++;
        return c;
    }
    if (*(ptr) == 0)
        return 1;

    return 0;
}

/**************************************************************************************************/

// The function tells which player won the game
int right(int a, int b, int c, char *val, char *ptr)
{
    return (*(ptr + a) == *val && *(ptr + b) == *val && *(ptr + c) == *val);
}

/**************************************************************************************************/

// This function prints the structure of the "tic tac toe" game.
void print(char value[])
{
    printf("\n");
    for (int i = 0; i < 9; i++)
    {
        if (i == 3 || i == 6)
            printf("\n\n");
        printf("%c    ", value[i]);
    }
    printf("\n\n");
}

/**************************************************************************************************/

// This function puts the value of the respective player in the "tic tac toe" game structure.
void playmove(int *a, int b, char *cmpmove, char *playermove, char *ptr)
{
    if (a != NULL)
    {
        *(ptr + (*a - 1)) = *playermove;
        print(ptr);
    }

    if (b != -1)
    {
        *(ptr + (b - 1)) = *cmpmove;
        printf("Computer has put %c in cell number %d\n", *cmpmove, b);
        print(ptr);
    }
}

/**************************************************************************************************/

// This plays the important move of the Computer.
int func(int loopstart, int loopEnd, int loopIncrement, int a, int b, char *symbol, char *cmpmove, char *ptr1, int *ptr2)
{
    int randNo;

    for (int i = loopstart; i < loopEnd; i += loopIncrement)
    {
        if (ptr1[i] == *symbol && ptr1[i + a] == *symbol && ptr1[i + b] == '-')
        {
            playmove(NULL, i + b + 1, cmpmove, NULL, ptr1);
            randNo = i + b + 1;
            swapcell(&randNo, NULL, ptr2);
            return 1;
        }
        else if (ptr1[i] == *symbol && ptr1[i + a] == '-' && ptr1[i + b] == *symbol)
        {
            playmove(NULL, i + a + 1, cmpmove, NULL, ptr1);
            randNo = i + a + 1;
            swapcell(&randNo, NULL, ptr2);
            return 1;
        }
        else if (ptr1[i] == '-' && ptr1[i + a] == *symbol && ptr1[i + b] == *symbol)
        {
            playmove(NULL, i + 1, cmpmove, NULL, ptr1);
            randNo = i + 1;
            swapcell(&randNo, NULL, ptr2);
            return 1;
        }
    }
    
    return 0;
}

/**************************************************************************************************/

// This function displays the information how to play this game.
void how_to_play()
{
    printf("\n\n**********************************************************************************************\n\n");
    printf("You have 2 choises, you can choose either symbol (O or X) to play your move. If you choose one symbol from two symbol, then Computer will get the remaining symbol.\n\nFor example:\n\nIf you choose X then Computer will get O\n\n\n");
    printf("And to play your move:\n\nYou have select a cell by entering the cell number and Computer will also select a cell by choosing a cell number.\n\n\n");
    printf("There are 9 cells numbered\n\n1    2    3\n\n4    5    6\n\n7    8    9\n\n");
    printf("For Example:\n\nIf you have choosen X and Computer got O and you have selected the cell 5. Then Computer will put X in the cell number 5 as your move, after that Computer will select a cell number (9) and put O in the selected cell number as Copmuter move\n\n");
    printf("Which will be looking like this:\n\n-    -    -\n\n-    X    -\n\n-    -    O\n\n\n");
    printf("I hope you have understood, How to play the game.\n\n");
    printf("**********************************************************************************************\n\n");
}

/**************************************************************************************************/

// Driver function of the program.
int main()
{
    O_and_X(); // Calling the function that plays the "tic tac toe" game.

    return 0;
}

/**************************************************************************************************/