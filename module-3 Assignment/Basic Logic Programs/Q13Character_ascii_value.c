#include<stdio.h>
int main(){
	int n1 = 65, n2 = 66;
	
	printf("Character value of %d is = %c\n",n1,n1);
	printf("Character value of %d is = %c\n",n2,n2);
	
	//user entered value
	int n;
	
	printf("Enter a number(0-127) = ");
	scanf("%d",&n);
	
	if(n >= 0 && n<= 127){
		char ch = n;
		printf("The character for ASCII value %d is '%c'.\n",n,ch);
	}
	else{
	  printf("Please enter a valid ASCII value between 0 and 127.\n");
	}	
	
	return 0;
}
