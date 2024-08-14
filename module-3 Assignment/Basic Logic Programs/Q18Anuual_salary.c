#include<stdio.h>
int main(){
	int sal,annual;
	
	printf("Enter monthly salary: ");
	scanf("%d",&sal);
	
	annual=sal*12;
	
	printf("%d is Annual salary",annual);
	
	return 0;
}
