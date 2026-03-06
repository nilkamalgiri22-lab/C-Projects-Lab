#include <stdio.h>
#include<math.h>
int main(){

    int x,n,i,sum=0;
    printf("Enter a number whose powers you want to sum: ");
    scanf("%d",&x);
    printf("how many powers of %d you want to sum: ",x);
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum=sum+pow(x,i);
    }
    printf("The sum of powers of %d from 1 to %d is: %d",x,n,sum);
return 0;
}

