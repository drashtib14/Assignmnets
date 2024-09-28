#include<stdio.h>
int main(){
	int num1;
	
	printf("Enter the number of table you want to print: ");
	scanf("%d",&num1);
	
	for(int i=1;i<=10;i++){
		printf("\n%d x %d = %d",num1,i,num1*i);
	}
	
	return 0;
}
