#include<stdio.h>
void main(){
	int i,n,max;
	printf("enter the size : ");
	scanf("%d",&n);
	int a[n];
	printf("enter num : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
    for(i=0;i<n;i++){
		if(a[i]>max){
	      max=a[i];
		}
	}
	int secondlargest=a[0];
	for(i=0;i<n;i++){
		if(a[i]>secondlargest && a[i]<max){
		      secondlargest=a[i];
		}
	}
	printf("second largest number: %d",secondlargest);
}
