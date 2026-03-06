#include<stdio.h>
int main()
{
    int i;
    printf("Odd numbers from 20 to 50 are:\n");
    for(i=20;i<=50;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
