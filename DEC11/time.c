#include<stdio.h>
int main()
{
int seconds,minutes,hours,day;
printf("The given second is : ");
scanf("%d",&seconds);
hours=seconds/3600;
minutes=(seconds % 3600)/60;
seconds=((seconds % 3600) % 60);
day=hours/24;
printf("\nThe time now is %d:%d:%d:%d\n\n",day,hours,minutes,seconds);
return 0;
}
