#include<stdio.h>
int main()
{
char ch;
printf("\n Enter an alphabet: ");
scanf("%c", &ch);
if (ch>='a' && ch<='z')
{
ch=ch-32;
printf("\nThe uppercase of the entered alphabet is %c", ch); }
else
printf("\nThe entered character is not a lower case alphabet");
return 0;
}

