#include<stdio.h>
int main(){
	char name[50];
	int length=0;
	
	printf("\nEnter the string = ");
	gets(name);
	printf("\nOriginal string = %s",name);
	
	//using while loop
	int i=0;
	while(name[i]!='\0'){
		length++;
		i++;
	}
	
	printf("\nLength of string is = %d",length);
	
	return 0;
}
