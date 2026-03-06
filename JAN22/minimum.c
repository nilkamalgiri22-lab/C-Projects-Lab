#include<stdio.h>
int main()
{
int i;
int arr[10];
int min=arr[0];
printf("Enter 10 integers : ");
for(i=0;i<10;i++){
scanf("%d",&arr[i]);}
min=arr[0];
for(i=1;i<10;i++){
if(arr[i]<min){
min=arr[i];}
}
printf("The lowest number is : %d\n",min);
return 0;
}
