#include<stdio.h>
void main()
{
	int n,sum=0,ans,i;
	printf("Enter N: ");
	scanf("%d",&n);
	do{
		ans=i*i;
		sum+=ans;
		i++;
		printf("%d\n",ans);
	}
	while(i<=n);                                       
}
