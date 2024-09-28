#include<stdio.h>
int main(){
//	Formula: length*width
	int l,w,area;
	
	printf("Enter value of length and width: ");
	scanf("%d %d",&l,&w);
	
	area=l*w;
	
	printf("Area of rectangle is %d",area);
	
	return 0;
}
