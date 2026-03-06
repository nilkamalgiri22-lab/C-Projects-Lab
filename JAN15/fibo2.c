#include<stdio.h>

int main()
{
    int n, i, term = 1;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("The series is: ");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", term);
        term = (term * 2) + 1;
    }
    return 0;
}
