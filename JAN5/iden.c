#include<stdio.h>
int main()
{
char ch;
printf("\n\nEnter input through keyboard : \n\n");
scanf("%c",&ch);
if(ch>=48&&ch<=57)
printf("The given input is a number.\n\n");
else if(ch>=65&&ch<=90)
printf("The given  input is an upper case alphabet.\n\n");
else if(ch>=97&&ch<=122)
printf("The given input is an lowercase alphabet.\n\n");
else
printf("The given input is a special character.\n\n");
return 0;
}
