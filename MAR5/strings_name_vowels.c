#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int count = 0;

    printf("Enter your name: ");
    gets(name); // Simple way to take full name input

    for (int i = 0; i < strlen(name); i++)
    {
        char c = name[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("No vowels found in the name.\n");
    }
    else
    {
        printf("Total number of vowels: %d\n", count);
    }
    return 0;
}