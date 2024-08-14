#include<stdio.h>
int main(){
//	Formula: 6*cube*cube
	int cube,area;
	
	printf("Enter the value of cube: ");
	scanf("%d",&cube);
	
	area=6*cube*cube;
	
	printf("The area of cube is %d",area);
	
	return 0;
}
