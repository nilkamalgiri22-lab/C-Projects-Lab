#include <stdio.h>
int main() {
int i, n,sum=0;
printf("Enter a number whose inverse you want to add: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    sum=sum+1/i;
}
printf("The sum of inverse of %d from 1 to %d is: %d",n,n,sum);
return 0;
}
