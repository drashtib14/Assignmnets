#include<stdio.h>
int main(){
	int no1,no2;
	
	printf("Enter any two numbers: ");
	scanf("%d %d",&no1,&no2);
	printf("\nBefore swapping no1 is %d and no2 is %d",no1,no2);
	
	no1=no1+no2;
	no2=no1-no2;
	no1=no1-no2;
	
	printf("\nAfter swapping no1 is %d and no2 is %d",no1,no2);	
	
	return 0;
}
