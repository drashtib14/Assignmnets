#include<stdio.h>
int main(){
	float sci,math,comp,total,pr;
	
	printf("Enter the marks of science: ");
	scanf("%f",&sci);
	printf("Enter the marks of maths: ");
	scanf("%f",&math);
	printf("Enter the marks of computer: ");
	scanf("%f",&comp);
	
	total=sci+math+comp;
	pr=(total/300)*100;
	
	printf("The percentage is %.2f",pr);
	
	if(pr>40){
		printf("\nPass");
	}
	else if(pr<40 && pr>0){
		printf("\nFail");
	}
	else{
		printf("\nNot valid");
	}
	
	return 0;
}
