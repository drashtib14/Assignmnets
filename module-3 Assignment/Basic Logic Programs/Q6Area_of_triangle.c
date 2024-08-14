#include<stdio.h>
int main(){
//	Formula: 0.5*base*height
	float b,h,area;
	
	printf("Enter the base and height of triangle: ");
	scanf("%f %f",&b,&h);
	
	area=0.5*b*h;
	
	printf("The area of triangle is %.2f",area);
	
	return 0;
}
