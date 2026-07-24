#include <stdio.h>

int main() {
    int i, j, target, number;
    int arr[5] = {0};
    for (i = 0; i < 5; i++) {
        printf("enter a number to add in array: ");
        if (scanf("%d", &arr[i]) != 1) return 1;
    }
    printf("enter target number:");
    scanf("%d",& target);
    for(i=0;i<4;i++){
        for(j=i+1;j<=5;j++){
            number = arr[0]+arr[i];
            if (number == target) {
                printf("[%d,%d]",arr[0], arr[i]);
                break;
            }
        }
    }
    return 0;
}