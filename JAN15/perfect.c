#include<stdio.h>
int main(){
    int n, i, sum = 0; 

    printf("Enter a number to check if it's perfect: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }
    if(sum == n && n > 0) {
        printf("%d is a Perfect Number.\n", n);
    } else {
        printf("%d is Not a Perfect Number.\n", n);
    }

    return 0;
}

