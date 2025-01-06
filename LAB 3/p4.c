#include<stdio.h>
void main()
{
	int n1,n2;
	printf("Enter n1 : ");
	scanf("%d",&n1);
	printf("Enter n2 : ");
	scanf("%d",&n2);
	do{
		if(n1%2==0 && n1%4!=0)
		{
			printf("%d\n",n1);
		}
		n1++;
	}
	while(n1<=n2);
}
