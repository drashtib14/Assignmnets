#include<stdio.h>
int main(){
	char n;
	
	printf("Enter a letter or digit or special character: ");
	scanf("%c",&n);
	
	if(n>='a'&& n<='z'){
		printf("%c is lowercase");
	}
	else if(n>='A' && n<='Z'){
		printf("%c is uppercase");
	}
	else if(n>='0' && n<='9'){
		printf("%c is digit");
	}
	else{
		printf("%c is special character");
	}
	
	return 0;
}
