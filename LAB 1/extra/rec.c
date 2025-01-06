#include<stdio.h>
void main()
{
	int n,a;
	printf("enter n : ");
	scanf("%d",&n);
	a =fact(n);
	printf("%d",a);
}
int fact(n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1); 
	}
	
}
