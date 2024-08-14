#include<stdio.h>
#include<math.h>
int main(){
	double principal,rate,time,amount,compound_interest;

    printf("Enter the principal amount: ");
    scanf("%lf",&principal);
    
    printf("Enter the annual interest rate: ");
    scanf("%lf",&rate);
    
    printf("Enter the time in years: ");
    scanf("%lf",&time);
	
//	using formula: Amount = P * (1 + R/100)^t
	amount = principal * pow((1 + rate / 100),time);
	
	compound_interest = amount - principal;
	
	printf("The total amount after %.2lf years is: %.2lf\n",time,amount);
    printf("The compound interest is: %.2lf\n",compound_interest);
	
	return 0;
}
