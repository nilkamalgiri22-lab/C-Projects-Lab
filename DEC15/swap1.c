#include<stdio.h>
int main()
{
int a,b;
printf("\nThe two numbers are : ");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n\nThe swapped numbers are a : %d and b : %d\n\n",a,b);
return 0;
}
