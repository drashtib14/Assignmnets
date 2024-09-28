#include<stdio.h>
int main(){
//	addition
	int no1,no2,sum;
	printf("Enter values for addition: ");
	scanf("%d %d",&no1,&no2);
	sum=no1+no2;
	printf("Addition is %d",sum);

//	subtraction
	int no3,no4,sub;
	printf("\nEnter values for subtraction: ");
	scanf("%d %d",&no3,&no4);
	sub=no3-no4;
	printf("Subtraction is %d",sub);
	
//	multiplication
	int no5,no6,mul;
	printf("\nEnter values for multiplication: ");
	scanf("%d %d",&no5,&no6);
	mul=no5*no6;
	printf("Multiplication is %d",mul);
	
//	division
	int no7,no8,div;
	printf("\nEnter values for division: ");
	scanf("%d %d",&no7,&no8);
	div=no7/no8;
	printf("Division is %d",div);
		
//	modulo
	int no9,no10,mod;
	printf("\nEnter values for modulo: ");
	scanf("%d %d",&no9,&no10);
	mod=no9%no10;
	printf("Modulo is %d",mod);
	
	return 0;
}
