#include<stdio.h>
#define n 5
int front=-1,rear=-1,q[n],value;
void Enqueue(int value)
{
	if(rear>=n-1)
	{
		printf("Queue Overflow\n");
		return;
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear++;
		q[rear]=value;
	}
	
}
int Dequeue()
{
	if(front==-1)
	{
		printf("Queue Overflow\n");
		return 0;
	}
	value=q[front];
	if(front==rear)
	{
		front=0;
		rear=0;
	}
		front++;
		return value;
}
void Display()
{
	int i;
	if(front==-1)
	{
		printf("Queue Underflow\n");
		return;
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",q[i]);
		}
	}
}
void main()
{
	int value,choice;
	while(1)
	{
		printf("1. Enter for Enqueue\n2. Enter for Dequeue\n3. Enter for Display\n4 Enter for Exit");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter Value for Enqueue:\n");
				scanf("%d",&value);
				Enqueue(value);
				break;
			case 2:
				value=Dequeue();
				if(value!=-1)
				{
					printf("Dequeue Value %d\n",value);
				}
				break;
			case 3:
				Display();
				break;
			default:
				printf("Invalid Input");
		}
	}
}
