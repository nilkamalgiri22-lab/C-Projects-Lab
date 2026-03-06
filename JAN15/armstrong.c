#include<stdio.h>   
int main()  
{  
    int num, originalNum, remainder, result = 0;  
    printf("Enter a three-digit integer: ");  
    scanf("%d", &num);  
    originalNum = num;  
    for (; originalNum != 0; originalNum /= 10) {  
        remainder = originalNum % 10;  
        result += remainder * remainder * remainder;  
    }  
    if (result == num)  
        printf("%d is an Armstrong number.", num);  
    else  
        printf("%d is not an Armstrong number.", num);  
    return 0;  
}
