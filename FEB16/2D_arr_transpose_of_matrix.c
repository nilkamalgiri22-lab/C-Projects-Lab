//WAP to find the transpose of a matrix.
#include<stdio.h>

int main(){
    int i, j, m, n;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter the elements of the matrix: \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The transpose of the matrix is: \n");
    for(j = 0; j < n; j++){
        for(i = 0; i < m; i++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }               
    return 0;
}