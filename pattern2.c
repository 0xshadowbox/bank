#include<stdio.h>

int main(){
    int i, j, n;
    printf("Enter the n: ");
    scanf("%d", &n);
    for(i=n; i >= 0; i--){
        printf("* ");
        for (j = 0; j <= i; j++)
        {
            printf("\n");
        };
    }
}