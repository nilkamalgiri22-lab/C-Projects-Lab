#include<stdio.h>
int main ()
{
int h1,h2,h,m1,m2,m,s1,s2,s;
printf("\nThe first time is : \n");
scanf("%d %d %d",&h1,&m1,&s1 );
printf("\nThe second time is : \n");
scanf("%d %d %d",&h2,&m2,&s2 );
s=s1+s2;
m=m1+m2+(s/60);
s=s%60;
h=h1+h2+(m/60);
m=m%60;
printf("\nThe final added time is %d hours %d minutes %d seconds\n\n",h,m,s);
return 0;
}
