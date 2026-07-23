#include<stdio.h>

int main(){
    int i, j, s;
    for (int i=1; i<=1000; i++){
        for (int s=1; s<=1000-i; s++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");     
    }
    return 0;
}  