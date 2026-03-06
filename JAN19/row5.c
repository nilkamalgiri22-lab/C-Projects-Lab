#include <stdio.h>

int main() {
    int rows, i, j, s;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        for (s = 0; s < (rows - i); s++) {
            printf("   ");
        }

        for (j = i; j >= 1; j--) {
            printf("%2d ", j);
        }

        printf("\n");
    }

    return 0;
}
