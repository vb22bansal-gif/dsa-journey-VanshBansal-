#include<stdio.h>
//WAP traversing array using pointer//
int main(){
    int arr[5]={20,40,60,80,100};
    int n=5;
    int *p=arr;
    for (int i=0; i<5; i++){
        printf("%d",*(p+i));
    }
    return 0;
}
 