#include<stdio.h>
int main(){
	char name[50];
	int length=0;
	
	printf("\nEnter the string = ");
	gets(name);
	printf("\nOriginal string = %s",name);
	
	for(int i=0;name[i]!='\0';i++){
		length++;
	}
	
	printf("\nLength of string is = %d",length);
	
	return 0;
}
