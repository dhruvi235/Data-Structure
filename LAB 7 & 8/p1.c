#include<stdio.h>
#define N 5

int S[N],top=-1,pos,i;

void push(int x)
{
	if(top>=N-1)
	{
		printf("Stack Overflow\n");
		return;
	}
	top++;
	S[top]=x;
	return;
}

int pop()
{
	if(top==-1)
	{
		printf("Stack Underflow\n");
		return -1;
	}
	else
	{
		top--;
		return(S[top+1]);
	}
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack Underflow\n");
		return;
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",S[i]);
		}
	}
}
//Using PEEP & Change
int peep(int i)
{
	if(top-i+1<=-1)
	{
		printf("Stack Underflow\n");
		return 0;
	}
	return(S[top-i+1]);
}

void change(int x,int pos)
{
	if(top-pos+1<=-1)
	{
		printf("Stack Underflow\n");
		return;
	}
	S[top-pos+1]=x;
	return;
}

void main()
{
	int x,i,choice,pos;
	while(1)
	{
		printf("Enter Choice\n 1 for Push\n 2 for Pop\n 3 for Display\n 4 for PEEP\n 5 for Change\n 6 for Exit");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter Value for Push:\n");
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				printf("Enter Value for Pop:\n");
//				scanf("%d",&x);
				x=pop();
//				break;
				if(x!=-1)
				{
					printf("Pop Value : %d\n",x);
				}
//				printf("%d\n",pop());
				break;
			case 3:
				printf("Display Stack:\n");
				display();
				break;
			case 4:
				printf("Enter Value for PEEP:\n");
				scanf("%d",&i);
				x=peep(i);
				printf("PEEP Value:%d\n",x);
				break;
			case 5:
				printf("Enter Position for Change:\n");
				scanf("%d",&pos);
				printf("Enter Value for Change:\n");
				scanf("%d",&x);
				change(x,pos);
				break;
			case 6:
				return;
				break;
			default:
				printf("Invalid Choice");
		}
	}
}
