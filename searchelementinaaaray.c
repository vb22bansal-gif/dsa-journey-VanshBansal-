//WAP to search the elements given to the array
#include<stdio.h>
int main(){
    int i, target,n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("enter a number to add in array: ");
        if (scanf("%d", &arr[i]) != 1) return 1;
    }
    printf("Enter the target element:");
    scanf("%d",&target);
    for(i=0;i<=n;i++){
        if(arr[i]==target){
            printf("found at index=%d",i);
            break;
        }
        if(i=n){
            printf("target number is not in array");
        }
    }
    return 0;
}