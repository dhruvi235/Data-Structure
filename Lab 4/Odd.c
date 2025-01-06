#include<stdio.h>
int main()
{
int i,n;

printf("Enter The Value Of n : ");
scanf("%d",&n);

printf("Odd numbers between 1 and %d are:\n",n);

for(i=1;i<=n;i+=2){
printf("%d\n",i);
}
}
