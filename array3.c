	#include <stdio.h>

int main() {
	int i,n,sum=0,avg;
	
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[100];
 
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = sum / n;
    printf("Average of the array: %d \n",avg);

}

