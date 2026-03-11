#include <stdio.h>

int main()
{
    int i, j;
    int matrix1[2][7];
 
    printf("Enter the temperatures of city_01 and city_02 respectively of seven days each: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf(" Enter the temperature of city %d and day %d in celcius : ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
         printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("The temperature of city %d of the day %d is  %d degree celcius. \n", i+1, j+1, matrix1[i][j]);
        }
        printf("\n");
    }
    return 0;
}