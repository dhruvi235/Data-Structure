#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter Size:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Element : ");
		scanf("%d",&a[i]);
	}
	printf("--All elements in Reverse Order--\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}
