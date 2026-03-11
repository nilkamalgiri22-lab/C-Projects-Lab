#include<stdio.h>

int main(){
    int i,n;
    int target,position;
    int found=0;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number %d : \n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the target number you want to search for :");
    scanf("%d",&target);
    for (int i = 0; i < n; i++)
    {
        if(target==arr[i]){
            found=1;
            position=i+1;
            break;
        }
    }
    if(found==1){
        printf("YAY! WE GOT YOUR NUMBER AT POSITION %d!!", position);
    }
    else
    printf("Sorry!! THERE IS NO SUCH NUMBER.");
    return 0;
}