#include<stdio.h>
int revNum(int num){
	int rev = 0;
	
	for(;num!=0;num/=10){
		int digit = num % 10;
		rev = rev * 10 + digit;
	}
	return rev;
}
int isPalindrome(int num){
	int rev = revNum(num);
	return num == rev;
}
int main(){
	int num;
	
	printf("Enter a number = ");
	scanf("%d",&num);
	
	if(isPalindrome(num)){
		printf("The number %d is a palindrome\n",num);
	}
	else{
		printf("The number %d is not a palindrome\n",num);
	}
	
	return 0;
}
