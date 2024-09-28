#include<stdio.h>
int main(){
	char e1,e2,e3,e4,e5;
	float s1,s2,s3,s4,s5;
	float totalsal,avgsal;
	
	printf("Enter the name of employee 1: ");
	scanf("%s",&e1);
	printf("Enter the salary of employee 1: ");
	scanf("%f",&s1);
	
	printf("Enter the name of employee 2: ");
	scanf("%s",&e2);
	printf("Enter the salary of employee 2: ");
	scanf("%f",&s2);
	
	printf("Enter the name of employee 3: ");
	scanf("%s",&e3);
	printf("Enter the salary of employee 3: ");
	scanf("%f",&s3);
	
	printf("Enter the name of employee 4: ");
	scanf("%s",&e4);
	printf("Enter the salary of employee 4: ");
	scanf("%f",&s4);
	
	printf("Enter the name of employee 5: ");
	scanf("%s",&e5);
	printf("Enter the salary of employee 5: ");
	scanf("%f",&s5);
	
	totalsal=s1+s2+s3+s4+s5;
	avgsal=totalsal/5;
	
	printf("%.2f is total salaries of employees",totalsal);
	printf("\n%.2f is average salary",avgsal);
	
	return 0;
}
