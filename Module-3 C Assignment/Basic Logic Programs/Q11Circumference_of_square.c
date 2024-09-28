#include<stdio.h>
int main(){
//	Formula: c=4*side
	int side,circumference;
	
	printf("Enter the value to find circumference of square: ");
	scanf("%d",&side);
	
	circumference=4*side;
	
	printf("The circumference of square is %d",circumference);
	
	return 0;
}
