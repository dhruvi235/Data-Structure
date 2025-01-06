#include<stdio.h>
struct book{
	char book_title[100];
	char author_name[50];
	int book_publication_year;
	float book_price;
};
void main()       
{
	int n,i;
	printf("Enter Number : ");
	scanf("%d",&n);
	struct book b[n];
	for(i=1;i<=n;i++)
	{
		printf("Enter the details of the book\n",i+1);
		
		printf("Title : \n");
		scanf("%s",b[i].book_title);
		
		printf("Author : \n");
		scanf("%s",b[i].author_name);
		
		printf("Publication Year : \n");
		scanf("%d",&b[i].book_publication_year);
		
		printf("Price : \n");
		scanf("%f",&b[i].book_price);
	}
	printf("--Book Details--\n");
	for(i=1;i<=n;i++)
	{
		printf("Details of the book\n",i+1);
		printf("Title : %s\n",b[i].book_title);
		printf("Author : %s\n",b[i].author_name);
		printf("Publication Year : %d\n",b[i].book_publication_year);
		printf("Price : %f\n",b[i].book_price);
	}
}
