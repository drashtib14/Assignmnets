#include<stdio.h>
int main(){
//	Formula: triangle=a+b+c
	int a,b,c,circumference;
	
	printf("Enter the value of two sides of height and base: ");
	scanf("%d %d %d",&a,&b,&c);
	
	circumference=a+b+c;
	
	printf("The circumference of triangle is %d",circumference);
	
	return 0;
}
