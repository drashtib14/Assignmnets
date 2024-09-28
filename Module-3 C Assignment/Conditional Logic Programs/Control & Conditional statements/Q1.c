#include<stdio.h>
int main(){
	int n1,n2;
	
	printf("Enter any two numbers: ");
	scanf("%d%d",&n1,&n2);
	
	if(n1 == n2){
		printf("They are equal numbers");
	}
	else{
		printf("They're not equal numbers");
	}
	
	return 0;
}
