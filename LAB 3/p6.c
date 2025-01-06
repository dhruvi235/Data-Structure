#include<stdio.h>
void main()
{
	int n,sum=0,i=1;
	printf("Enter N: ");
	scanf("%d",&n);
	do{
		if(i%2==1)
		{
			sum+=i;
		}
		else
		{
			sum-=i;
		}
		i++;
	}
	while(i<=n);
	printf("%d\n",sum);
}
