#include<stdio.h>
int main(){
	int num,sum=0,digit;
	
	printf("Enter a number = ");
	scanf("%d",&num);
	
	while(num!=0){ 
		digit = num % 10;
		sum += digit;
		num = num / 10;
	}
	
	printf("\n%d",sum);
	
	return 0;
}
