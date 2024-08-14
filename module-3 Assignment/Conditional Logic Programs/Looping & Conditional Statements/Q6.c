#include<stdio.h>
int main(){
	int range,num1=0,num2=1,num3;
	
	printf("Enter a range. Range should be minimun 3: ");
	scanf("%d",&range);
	
	if(range<3){
		printf("Please enter a number greather than 2");
	}
	else{
		printf("\n%d\t%d\t",num1,num2);
		for(int i=0;i<=range-2;i++){
			num3 = num1 + num2;
			printf("%d\t",num3);
			num1 = num2;
			num2 = num3;
		}
	}
	
	return 0;
}
