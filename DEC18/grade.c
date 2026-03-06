#include<stdio.h>
int main()
{
int math,physics,evs,scls,md,total,percentage;
printf("\n\nThe numbers of the five subjects are : \n\n");
scanf("%d %d %d %d %d",&math,&physics,&evs,&scls,&md);
total=math+physics+evs+scls+md;
percentage=total/5;
if(percentage>=90&&percentage<=100)
{
printf("\nThe grade is O\n\n");
}
if(percentage>=80&&percentage<=89)
printf("\nThe grade is E\n\n");
if(percentage>=70&&percentage<=79)
printf("\nThe grade is A\n\n");
 if(percentage>=60&&percentage<=69)
printf("\nThe grade is B\n\n");
 if(percentage>=50&&percentage<=59)
printf("\nThe grade is C\n\n");
 if(percentage>=40&&percentage<=49)
printf("\nThe grade is D\n\n");
else if(percentage<40)
printf("\nThe grade is E\n\n");

return 0;
}
