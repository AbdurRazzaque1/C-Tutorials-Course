#include <stdio.h>

int main()
{
    // rows1 and columns1 means number if rows and number of columns of the first matrix and vice versa
    int rows1, rows2, columns1, columns2;
    printf("How many Rows are there in your first matrix:  ");
    scanf("%d", &rows1);
    getchar();
    printf("How many columns are there in your first matrix:  ");
    scanf("%d", &columns1);
    getchar();
    int mat1[rows1][columns1]; // first matrix

    printf("\n\nHow many Rows are there in your second matrix:  ");
    scanf("%d", &rows2);
    getchar();
    printf("How many columns are there in your second matrix:  ");
    scanf("%d", &columns2);
    getchar();
    int mat2[rows2][columns2]; // second matrix
    int resultant[rows1][columns2];
    if (columns1 != rows2)
    {
        printf("\nSORRY, I cannot multiply your matrix\n");
        printf("To multiply the matrices ensure that the number of columns of the first matrix is equal to the number of rows of the second matrix\n");
    }

    else
    {
        // Taking input of the first matrix from the user.
        printf("\nEnter the elements of the first matrix\n\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                printf("Enter the element which is at (%d, %d):  ", i + 1, j + 1);
                scanf("%d", &mat1[i][j]);
            }
        }

        // Taking input of the second matrix from the user.
        printf("\n\nEnter the elements of the second matrix\n\n");
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                printf("Enter the element which is at (%d, %d):  ", i + 1, j + 1);
                scanf("%d", &mat2[i][j]);
            }
        }

        // Inserting the values in the resultant matrix.
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                resultant[i][j] = 0;
                for (int k = 0; k < columns1; k++) // write (k < columns1) OR write (k < rows2) both are same thing.
                {
                    resultant[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        // Displaying the values of the resultant matrix.
        printf("\n\n");
        printf("Your new matrix after the multiplication will look like this.\n\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                printf("Element of the new matrix which is at (%d, %d) = %d\n", i + 1, j + 1, resultant[i][j]);
                // printf("%d\t", resultant[i][j]);
            }
            // printf("\n\n");
        }
    }
    return 0;
}