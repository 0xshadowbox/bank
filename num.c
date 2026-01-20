#include<stdio.h>

int main(){
    int n;
    printf("Enter the pending: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i == 18){
            continue;
        }
        if(i == 36){
            break;
        }

        printf("%d\n",i);
    }
}
