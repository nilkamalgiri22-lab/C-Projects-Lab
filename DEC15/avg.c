#include<stdio.h>
int main ()
{
float math,physics,evs,scls,md,average,percentage;
printf("\nThe aquired marks in the five subjects respectively are\n");
scanf("%f %f %f %f %f", &math,&physics,&evs,&scls,&md);
percentage=((average*5)*100)/500;
average=(math+physics+evs+scls+md)/5;
printf("\nThe average is %f and the percentage is %f\n\n",average,percentage);
return 0;
}
