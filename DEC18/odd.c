#include<stdio.h>
int main()
{
int a;
printf("\n\nEnter the number : \n");
scanf("%d",&a);
if(a%2==0){
printf("The given number %d is even\n\n",a);
}
else
printf("The number is odd\n\n");
return 0;
}
