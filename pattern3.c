#include<stdio.h>

int main() {
    int row;
    printf("Enter the row: ");
    scanf("%d", &row);

    for(int i=0; i < row; i++){
        for(int j=0; j <= row; j++){
            if((i+j)<row){
                printf("@");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}