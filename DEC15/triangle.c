#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s,area;
printf("\nEnter the three sides of the triangle :\n\n");
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nThe area of the triangle is : %f\n\n",area);
return 0;
}
