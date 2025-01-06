#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("enter n : ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
	}
	if(count==1)
	{
		printf("number is not prime");
	}
	else
	{
		printf("number is  prime");
	}
}
