//WAP to create an arrey that can store maximum 10 integers and print the elements of the array.
#include <stdio.h>
int main() {
    int arr[10];
    int i;

    // Input elements into the array
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("The elements of the array are:\n");
    for(i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
