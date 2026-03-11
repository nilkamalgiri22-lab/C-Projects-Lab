#include <stdio.h>

int main()
{
    int n;
    int duplicate_count = 0;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number %d: \n", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] == arr[j])
            {
                duplicate_count++;
                break;
            }
        }
    }

    if (duplicate_count > 0)
    {
        printf("Total number of duplicate elements found: %d\n", duplicate_count);
    }
    else
    {
        printf("No duplicates found! Every number is totally unique.\n");
    }

    return 0;
}