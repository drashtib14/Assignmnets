#include<stdio.h>
int main(){
	int e1,e2,e3,e4,e5,totalex,avg;
	
	printf("Enter any 5 expenses:");
	scanf("%d %d %d %d %d",&e1,&e2,&e3,&e4,&e5);
	
	totalex=e1+e2+e3+e4+e5;
	avg=totalex/5;
	
	printf("%d is average expense",avg);
	
	return 0;
}
