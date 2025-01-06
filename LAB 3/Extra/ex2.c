#include<stdio.h>
void main()
{
	int a[10],i,pos,n;
	
	printf("Enter 5 Ele here : \n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nEntered Elements--");
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	}
	
	printf("\nEnter Position--");
	scanf("%d",&pos);
	
	for(i=pos-1;i<5;i++)
	{
		a[i]=a[i+1];
	}
	printf("Elements updated Successfully");
	printf("updated elements are : \n");
	for(i=0;i<=5;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
