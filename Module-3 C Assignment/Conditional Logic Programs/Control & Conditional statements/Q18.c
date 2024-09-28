#include<stdio.h>
int main(){
	float sp,cp,profit,loss;
	
	printf("Enter the cost price: ");
	scanf("%f",&cp);
	printf("Enter the selling price: ");
	scanf("%f",&sp);
	
	if(sp>cp){
		profit=sp-cp;
		printf("Profit= %.2f\n",profit);
	}
	else if(cp>=sp){
		loss=cp-sp;
		printf("Loss= %.2f\n",loss);
	}
	else{
		printf("No profit no loss");
	}
	
	return 0;
}
