#include<stdio.h>
int main(){
	int n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	if(n>-1){
		printf("The number is positive");
	}
	else{
		printf("The number is negative");
	}
	
	return 0;
}
