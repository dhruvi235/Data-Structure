#include<stdio.h>
void main()
{
	int n;
	printf("enter n : ");
	scanf("%d",&n);
	int i,fact;
	for(i=2;i<=n;i++)
	{
		fact = fact*i;
	}
	printf("factorial : %d",fact);
}
