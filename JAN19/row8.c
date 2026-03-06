#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    long long factorial = 1; 

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = factorial * i; 
        sum = sum + ((double)i / factorial);
    }

    printf("The sum of the series is: %.4lf\n", sum);

    return 0;
}
