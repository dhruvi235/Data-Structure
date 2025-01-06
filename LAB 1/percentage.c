#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5;
	printf("enter marks s1 : ");
	scanf("%d",&s1);
	printf("enter marks s2 : ");
	scanf("%d",&s2);
	printf("enter marks s3 : ");
	scanf("%d",&s3);
	printf("enter marks s4 : ");
	scanf("%d",&s4);
	printf("enter marks s5 : ");
	scanf("%d",&s5);
	int total = s1+s2+s3+s4+s5;
	float per = total/5;
	if(per<35)
	{
		printf("fail");
	}
	else if(per>35 && per<45)
	{
		printf("pass class");
	}
	else if(per>45 && per<60)
	{
		printf("second class");
	}
	else if(per>60 && per<70)
	{
		printf("first class");
	}
	else
	{
		printf("distincition");
	}
}
