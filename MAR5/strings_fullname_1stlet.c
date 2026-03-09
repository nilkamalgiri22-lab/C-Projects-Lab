#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    printf("Enter your full name: \n");
    gets(name);

    printf("%c", name[0]); // Print the first letter of the first word

    for (int i = 0; i < strlen(name); i++) {
        if (name[i] == ' ') {
            printf(".%c\n", name[i+1]); // Print a dot and the letter after the space
        }
    }

    return 0;
}