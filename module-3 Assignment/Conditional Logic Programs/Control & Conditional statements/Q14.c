#include<stdio.h>
int main(){
	int n1,n2,n3;
	
	printf("Enter any 3 numbers: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if(n1>n2 && n1>n3){
		printf("%d is largest",n1);
	}
	else if(n2>n1 && n2>n3){
		printf("%d is largest",n2);
	}
	else{
		printf("%d is largest",n3);
	}
	
	return 0;
}
