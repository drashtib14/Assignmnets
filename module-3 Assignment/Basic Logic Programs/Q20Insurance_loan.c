#include<stdio.h>
int main(){
	float sal,ins,loan,resal;
	
	printf("Enter your monthly salary: ");
	scanf("%f",&sal);
	
	ins=sal*0.10;
	loan=sal*0.10;
	resal=sal-ins-loan;
	
	printf("%.2f is your reamaining salary",resal);
	
	return 0;
}
