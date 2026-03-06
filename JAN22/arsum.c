#include <stdio.h>
int main() {
    int arr[5];
    int i, sum = 0;

    // Input elements into the array
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("The elements of the array are:\n");
    for(i = 0; i < 5; i++) {
        sum += arr[i];
        
    }
    printf("%d\n", sum);
    return 0;
}
