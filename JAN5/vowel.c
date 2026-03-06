#include<stdio.h>
int main() 
{
char ch ;
printf("\n\nWrite the letter : \n\n");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
printf("\n\nThe given alphabet is a vowel\n\n");
else
printf("The given alphabet is a consonant.\n\n");
}
else
printf("The given thing is not included in the english alphabet.\n\n");
return 0;
}
