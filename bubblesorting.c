#include <stdio.h>

int main(){
    int n, i, j, temp;
    printf("Enter the size of an array:");
    if (scanf("%d", &n) != 1) return 0;
    int sorting[ n ];
    for(i = 0; i < n; i++){
        printf("enter number to be add in array:");
    scanf("%d", &sorting[i]);
    }
    for(i = 0; i < n-1; i++){
        temp=i;
        for(j = i+1; j <n; j++){
            if(sorting[j]<sorting[temp]){
                temp=j;
            }
            else{
                continue;
            }
        }
    }    
    for(i = 0; i < n-1; i++){
    printf("%d ", sorting[i]);
    printf("\n");
    }
    return 0;
}