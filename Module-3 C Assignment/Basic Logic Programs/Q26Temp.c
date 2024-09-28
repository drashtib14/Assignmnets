#include<stdio.h>
int main(){
	float farh,cels;
	
	printf("Enter Fahrenheit: ");
	scanf("%f",&farh);
	
	cels=(farh-32)*5/9;
	
	printf("%f",cels);
	
	return 0;
}
