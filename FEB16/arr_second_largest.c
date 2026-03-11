#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter the number of elements of the array : \n");
    scanf("%d", &n);

    if (n < 2) 
    {
        printf("You need at least two elements!\n");
        return 0;
    }

    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second_largest;
    int found_second = 0;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest) 
        {
            second_largest = largest;
            found_second = 1; 
            largest = arr[i]; 
        }
        else if (arr[i] < largest) 
        {
            if (found_second == 0 || arr[i] > second_largest)
            {
                second_largest = arr[i];
                found_second = 1;
            }
        }
    }

    if (found_second == 0) 
    {
        printf("No second largest element found.\n");
    } 
    else 
    {
        printf("The second largest element is : %d\n", second_largest);
    }

    return 0;
}