#include <stdio.h>
int main() {
    int arr[10], temp;
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0 && arr[9 - i] % 2 == 0) {
            temp = arr[i];
            arr[i] = arr[9 - i];
            arr[9 - i] = temp;
        }
    }
    
    printf("Array after swapping:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
