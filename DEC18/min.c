#include <stdio.h>

int main() {
    int a, b;

    printf("\nEnter two numbers: \n");
    scanf("%d %d", &a, &b);

    if (a < b)
        printf("Smallest number = %d\n\n", a);
    else if (b < a)
        printf("Smallest number = %d\n\n", b);
    else
        printf("Both numbers are equal\n\n");

    return 0;
}
