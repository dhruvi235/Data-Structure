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
	
	printf("\nEnter New Elements--");
	scanf("%d",&n);
	for(i=4;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=n;
	printf("Elements updated Successfully");
	printf("updated elements are : \n");
	for(i=0;i<=5;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
