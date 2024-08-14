#include<stdio.h>
int main(){
	int num1,num2,sum;
	
	printf("Enter first number = ");
	scanf("%d",&num1);
	
	printf("Enter second number = ");
	scanf("%d",&num2);
	
	sum = num1 + num2;
	
	printf("The sum of %d and %d is = %d\n",num1,num2,sum);
	
	if(sum < 10){
		printf("\nThe sum is small");
	}
	else if(sum <= 100){
		printf("\nThe sum is medium");
	}
	else{
		printf("\nThe sum is large");
	}
	
	return 0;
}
