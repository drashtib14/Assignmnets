#include<stdio.h>
int main(){
	int h;
	
	printf("Enter your height in centimeters: ");
	scanf("%d",&h);
	
	if(h<150){
		printf("You are considered short");
	}
	else if(h>=150 && h<=180){
		printf("You are considered avarage");
	}
	else{
		printf("You are considered tall");
	}
	
	return 0;
}
