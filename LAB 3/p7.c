#include<stdio.h>
void main()
{
	float sum=0,i=1,n;
	printf("Enter N: ");
	scanf("%f",&n);
	do
	{
		sum+=1/i;
		i++;
	}
	while(i<=n);
	printf("%f\n",sum);
}
