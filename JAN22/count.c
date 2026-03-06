#include <stdio.h>

int main() {
    int numbers[10];
    int even_count = 0;
    int odd_count = 0;
    int choice; 
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\nWhat would you like to count?\n");
    printf("Press 1 for Even\n");
    printf("Press 2 for Odd\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    if (choice == 1) {
        printf("\nTotal even numbers: %d\n", even_count);
    } else if (choice == 2) {
        printf("\nTotal odd numbers: %d\n", odd_count);
    } else {
        printf("\nInvalid choice! Please run again and pick 1 or 2.\n");
    }

    return 0;
}
