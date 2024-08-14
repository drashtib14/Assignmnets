#include<stdio.h>
int main(){
	int num;
	unsigned long long fact=1;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++){
		fact = fact * i;
	}
	
	printf("\nFactorial of %d is %llu",num,fact);
		
	return 0;
}
