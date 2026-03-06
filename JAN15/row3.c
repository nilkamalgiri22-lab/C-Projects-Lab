#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++) //loop for rows
    {
        for(j=i;j<5;j++) //loop for spaces
        {
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++) //loop for stars
        {
            printf("*");
        }
        printf("\n"); //move to next line after each row
    }
    return 0;
}
