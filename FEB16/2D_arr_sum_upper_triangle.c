#include <stdio.h>

int main()
{
    int i, j, sum_of_upper_triangle;
    int matrix[3][3];
    printf("Enter the elements of the matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element [%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum_of_upper_triangle= matrix[0][1]+matrix[0][2]+matrix[1][2];
        }
    }
    printf("The sum of the upper triangle is : %d\n",sum_of_upper_triangle);

    return 0;
}