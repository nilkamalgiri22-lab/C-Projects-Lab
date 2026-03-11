#include <stdio.h>

int main()
{
    int i, j, n;
    int delete_num;
    int found = 0;

    printf("We want to delete an element of the array.\n");
    printf("Enter the number of elements of the array : \n");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to delete : ");
    scanf("%d", &delete_num);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == delete_num)
        {
            for (j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            found = 1;
            n--;
            i--;
        }
    }

    if (found == 0)
    {
        printf("That number isn't even in the array, man!\n");
    }
    else
    {
        printf("Now the array is : ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}