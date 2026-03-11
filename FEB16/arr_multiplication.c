#include <stdio.h>

int main()
{
    int n, i;
    int product = 1;
    printf("Write the number of elements of the array :\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
        product *= arr[i];
    }
    printf("The product of the array is  :  %d \n", product);
    return 0;
}