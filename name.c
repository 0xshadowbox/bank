#include<stdio.h>

int main(){
    char c;
    printf("Enter the char: ");
    scanf("%c",&c);
    for (int row = 0; row < 10; row++){
        for (int col = 0; col < 5; col++){
            if ((row == 0 || col == 0 || col == 4 || row == 5 || row == 6) && !(row == 0 && col == 0) && !(row == 0 && col == 4)){
                printf(" %c ", c);
            }
            else
            {
                printf("   ");
            }
        }
        printf("   "); 
        for (int col = 0; col < 5; col++){
            if ((row == 0 || col == 0 || col == 4 || row == 9) && !(row == 0 && col == 4) && !(row == 9 && col == 4)){
                printf(" %c ", c);
            }
            else
            {
                printf("   ");
            }
        }
        printf("   "); 
        for (int col = 0; col < 5; col++){
            if ((row == 0 || row == 9 || col == 2)){
                printf(" %c ", c);
            }
            else
            {
                printf("   ");
            }
        }
        printf("   "); 
        for (int col = 0; col < 5; col++){
            if ((row == 0 || col == 2)){
                printf(" %c ", c);
            }
            else
            {
                printf("   ");
            }
        }
        printf("   "); 
        for (int col = 0; col < 5; col++){
            if ((row == 4 || row == 5 || col == 0 || col == 4)){
                printf(" %c ", c);
            }
            else
            {
                printf("   ");
            }
        }
        printf("   "); 
        for (int col = 0; col < 5; col++){
            if ((row == 4 || row == 5 || col == 0 || col == 4 || row == 9) && !(col == 0 && row > 4)){
                printf(" %c ", c);
            }
            else
            {
                printf("   ");
            }
        }
        printf("   "); 
        for (int col = 0; col < 5; col++){
            if ((row == 0 || col == 0 || col == 4 || row == 5 || row == 6) && !(row == 0 && col == 0) && !(row == 0 && col == 4)){
                printf(" %c ", c);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }   
}
