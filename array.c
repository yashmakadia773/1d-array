#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];
    int i;

    for (i = 0; i < n; i++) {
        printf("Enter element [%d] : ", i);
        scanf("%d", &array[i]);
    }

    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }

}

