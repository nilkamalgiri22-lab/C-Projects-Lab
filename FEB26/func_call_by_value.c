#include <stdio.h>
int swap(int a, int b)
{
   a=a+b;
   b=a-b;
   a=a-b;
    printf("After swapping: a=%d, b=%d\n", a, b);
}
int main()
{
    int a, b;
    printf("Enter the numbers you want to swap : ");
    scanf("%d %d", &a, &b);
    swap(a, b);
    printf("Values after swapping: a=%d, b=%d\n", a, b);
    return 0;
}
