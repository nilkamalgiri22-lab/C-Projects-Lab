#include <stdio.h>

int main() {
    int row1, col1, row2, col2;

    printf("Enter rows and columns for Matrix 1 : ");
    scanf("%d %d", &row1, &col1);

    printf("Enter rows and columns for Matrix 2 : ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2) {
        printf("\nMatrix multiplication is IMPOSSIBLE!\n");
        printf("Columns of Matrix 1 (%d) must exactly match Rows of Matrix 2 (%d).\n", col1, row2);
    } 
    else {
        int matrix1[row1][col1];
        int matrix2[row2][col2];
        int result[row1][col2]; 

        printf("\n--- Enter elements for Matrix 1 ---\n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                printf("Element [%d][%d]: ", i, j);
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("\n--- Enter elements for Matrix 2 ---\n");
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++) {
                printf("Element [%d][%d]: ", i, j);
                scanf("%d", &matrix2[i][j]);
            }
        }

        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                result[i][j] = 0;
                for (int k = 0; k < col1; k++) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        printf("\n--- THE RESULT MATRIX ---\n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                printf("%d\t", result[i][j]); 
            }
            printf("\n");
        }
    }

    return 0;
}