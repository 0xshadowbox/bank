#include<stdio.h>

int main() {
    int i, n, v, sum = 0;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter the value: ");
        scanf("%d", &v);
        if(v < 0) {
            continue; 
        }
        sum += v; 
    }

    printf("Sum: %d\n", sum);
    return 0;
}