#include<stdio.h>
int main(){
	char ch;
	
	printf("Enter a character = ");
	scanf("%c",&ch);
	
	int n = ch;
	
	printf("The ASCII value of '%c' is %d.\n",ch,n);
	
	return 0;
}
