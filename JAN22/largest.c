#include <stdio.h>
int main() {
    int arr[10];
    int i;
    int max = arr[0];

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for(i = 1; i < 10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest number is: %d\n", max);
    return 0;
}   
