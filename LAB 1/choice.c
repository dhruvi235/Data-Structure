#include<stdio.h>
void main()
{
	int a,b,n;
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	printf("enter your choice 1.add 2.sub 3.mul 4.div: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		printf("addition : %d ",a+b);
		break;
		
		case 2:
		printf("subtraction : %d ",a-b);
		break;
		
		case 3:
		printf("multiplication : %d ",a*b);
		break;
		
		case 4:
		printf("division : %d ",a/b);
		break;
		
		default:
		printf("invalid");
	}
	
}
