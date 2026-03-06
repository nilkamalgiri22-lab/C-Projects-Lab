#include<stdio.h>
int main()
{
    float a, b, c;
    printf("\nThe three numbers are respectively : \n\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a>b && a>c)
    printf("\nThe largest number is :%.2f\n\n" , a);
    else if (b>a && b>c)
    printf("\nThe largest number is :%.2f\n\n" , b);
    else    
    printf("\nThe largest number is :%.2f\n\n" , c);
    return 0;
}
