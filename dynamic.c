#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);
cd 
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr); 
    return 0;
}
