#include<stdio.h>
int main()
{
int a;
printf("\nThe number given is\n");
scanf("%d",&a);
if(a>0)
{
printf("The number %d is positive\n\n",a);
}
else if(a<0)
{
printf("The number %d is negative\n\n",a);
}
else 
printf("The number %d is equal to zero\n\n",a);

return 0;
}
