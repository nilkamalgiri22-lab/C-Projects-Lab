#include<stdio.h>
int main()
{
int i,num;
printf("Write the number whose multiplication table is wanted :\n\n");
scanf("%d",&num);
for(i=1;i<=10;++i)
{
printf("\n\n%d x %d = %d\n",num,i,num*i);
}
return 0;
}
