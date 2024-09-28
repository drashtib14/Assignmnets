#include<stdio.h>
int main(){
//	Formula: area=pi*r*r
//			 circumference=2*pi*r

	float pi = 3.14;
	float r,area,circumference;
	
//	area of circle
	printf("Enter the value to find area of circle: ");
	scanf("%f",&r);
	
	area=pi*r*r;
	
	printf("\nThe area of circle is: %.2f",area);
	
//	circumference of circle
	printf("\nEnter value to find circumference of circle: ");
	scanf("%f",&r);
	
	circumference = 2*pi*r;
	printf("\nThe circumference of circle is: %.2f",circumference);
	
	return 0;
}
