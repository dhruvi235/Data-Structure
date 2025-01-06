#include<stdio.h>
void main()
{
	int n,i,sum=0,avg=0,count=0;
	printf("Enter Size:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Element : ");
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=sum/n;
	printf("--All elements--\n");
	for(i=0;i<n;i++)
	{
		if(a[i]>avg)
		{
			count++;
		}
		printf("%d\n",a[i]);
	}
	printf("sum = %d\n",sum);
	printf("Avg = %d\n",avg);
	printf("Higher Avg Count = %d\n",count);
}
