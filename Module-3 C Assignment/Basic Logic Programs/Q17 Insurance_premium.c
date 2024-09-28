#include<stdio.h>
int main(){
	float sal,ins;
	
	printf("Enter the amount of salary: ");
	scanf("%f",&sal);
	
	ins=sal*0.10;1
//	ins=sal*10/100; //way 2
	
	printf("%.2f is insurance premium",ins);
	
	return 0;
}
