#include<stdio.h>
#include<math.h>

int main(){
    int n, originalNum, remainder, result = 0, numDigits = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    originalNum = n;

    while (originalNum != 0) {
        originalNum /= 10;
        numDigits++;
    }

    originalNum = n;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, numDigits);
        originalNum /= 10;
    }

    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}