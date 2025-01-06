#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter Size:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Element : ");
		scanf("%d",&a[i]);
	}
	printf("All elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
