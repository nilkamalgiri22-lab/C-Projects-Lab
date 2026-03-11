#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the number of the elements ofthe array : ");
    scanf("%d", &n);
    int arr[n];
    printf("The elements of the array are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    int number;
    int position;
    printf("Enter the number you want to insert : \n");
    scanf("%d", &number);
    printf("Enter the position you want to insert the number(give input from position 1 to %d) : \n", n);
    scanf("%d", &position);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == arr[position - 1])
        {
            arr[i] = number;
        }
    }
    printf("Now the array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}