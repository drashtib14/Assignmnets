#include<stdio.h>
int main(){
	int num,reverse = 0,rem;
	
	printf("Enter three numbers: ");
	scanf("%d",&num);
	int copy = num;
	
	while(num!=0){
		rem = num%10;
		reverse = (reverse*10)+rem;
		num = num/10;
	}
	
	printf("\nOriginal number is: %d",copy);
	printf("\nReversed number is: %d",reverse);
	
	if(copy==reverse){
		printf("\n%d is the palindrome number",copy);
	}
	else{
		printf("\n%d is not the palindrome number",copy);
	}
	
	return 0;
}
