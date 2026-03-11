#include <stdio.h>
void swap(int *a, int *b)
{
    int c;
    c = *a;  // c=10; It's basically derefrencing. The value at the address of a is stored in c.
    *a = *b; // the value at the address of b is stored in the address of a. So, a becomes 20.
    *b = c;  // the value of c is stored in the address of b. So, b becomes 10.
    printf("After swapping: a=%d, b=%d\n", *a, *b);
}
int main()
{
    int a, b;//Suppose a=10,b=20;
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("Values after swapping: a=%d, b=%d\n", a, b);
    return 0;
}
