#include <stdio.h>

int main() {
	int i,n,n1,temp;
    int a[100],b[100],c[100];

	printf("Enter A array Elements = \n");
    scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		c[i] =a[i];
		temp = i;
	}
	temp=temp+1;

	printf("Enter B array Elements = \n");
	scanf("%d", &n1);
	for(i=0;i<n1;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);	
		c[temp] = b[i];
		temp++;
	}	

	printf("\nMerge of Two Array = ");
	for(i=0; i<n+n1; i++)
	{
		printf("%d\t",c[i]);
	}
}

