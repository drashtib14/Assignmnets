#include<stdio.h>
int main(){
	int b_salary,g_salary,DA,HRA;
	
	printf("Enter your basic salary: ");
	scanf("%d",&b_salary);
	
	if(b_salary<=10000){
		HRA=b_salary*0.20;
		DA=b_salary*0.80;
		g_salary=b_salary+HRA+DA;
		
		printf("Your gross salary is %d",g_salary);
	}
	else if(b_salary<=20000){
		HRA=b_salary*0.25;
		DA=b_salary*0.90;
		g_salary=b_salary+HRA+DA;
		
		printf("Your gross salary is %d",g_salary);
	}
	else{
		HRA=b_salary*0.30;
		DA=b_salary*0.95;
		g_salary=b_salary+HRA+DA;
		
		printf("Your gross salary is %d",g_salary);
	}
	
	return 0;
}
