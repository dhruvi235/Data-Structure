#include<stdio.h>
void main()
{
	int n,i,sum=0,max=0,min=0;
	printf("Enter Size:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Element : ");
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	max=a[0];
	min=a[0];
	printf("--All elements--\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("sum = %d\n",sum);
	printf("Avg = %d\n",sum/n);
	printf("max = %d\n",max);
	printf("min = %d\n",min);
}
