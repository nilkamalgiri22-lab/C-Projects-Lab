#include<stdio.h>

int main(){
    int i, n, count=0;
    printf("Enter the number of elements in the array :");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            count++;
        }
    }
    printf("The number of positive integers in the array is %d",count);
    return 0;
}