#include <stdio.h>

int main() {
	int i,n,sum=0;
    int a[100],b[100],c[100];
	
    printf("Enter array value = ");
    scanf("%d", &n);

	printf("Enter A array Elements = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("Enter A array Elements = \n");
	for(i=0;i<n;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);	
	}	

	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
	printf("\nsum of Two Array = ");
	for(i=0; i<n; i++)
	{
		c[i] = a[i] + b[i];
		printf("%d\t",c[i]);
	}
}

