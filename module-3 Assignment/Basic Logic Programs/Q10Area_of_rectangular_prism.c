#include<stdio.h>
int main(){
//	Formula: 2(wl+hl+hw)
	int w,l,h,area;
	
	printf("Enter the value of width,length and height: ");
	scanf("%d %d %d",&w,&l,&h);
	
	area=2*w*l+2*h*l+2*h*w;
	
	printf("The area of rectangular prism is %d",area);
	
	return 0;
}
