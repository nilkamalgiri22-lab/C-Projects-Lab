#include <stdio.h>

int main()
{
    int i, n, temp;
    printf("Enter the number of elements of the array :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The original array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("\nReversed array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}