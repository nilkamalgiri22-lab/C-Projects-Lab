#include <stdio.h>

int main()
{
    int i, j;
    int matrix1[3][3];
    int matrix2[3][3];
    int isEqual = 1;
    printf("Enter the elements of the matrix1 : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("For matrix1 Enter the element [%d][%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of the matrix2 : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("For matrix2 Enter the element [%d][%d] : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matrix1[i][j] != matrix2[i][j])
            {
                isEqual = 0;
                break;
            }
        }
    }
    if (isEqual == 1)
    {
        printf("The two matrix are equal.\n");
    }
    else
        printf("The two matrix are not equal.");

    return 0;
}