#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    printf("Enter your full name: ");
    gets(name);

    for (int i = 0; i < strlen(name); i++) {
        if (name[i] == ' ') {
            name[i] = '\\'; // Replacing space with ' symbol
        }
    }

    printf("Modified name: %s", name);
    return 0;
}