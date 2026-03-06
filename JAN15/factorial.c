#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("The number whose factorial is wanted : \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("The factorial of the given number %d is : %d\n\n",n,fact );
return 0;
}
