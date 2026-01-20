#include<stdio.h>

int main(){
    int i, n, f = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    while(n < 0){
        break;
    }

    for(i=1; i<=n; i++){
        f = f*i;
    }

    printf("Factorial: %d", f);
}