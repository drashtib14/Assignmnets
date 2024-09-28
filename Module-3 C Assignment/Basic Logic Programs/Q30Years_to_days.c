#include<stdio.h>
int main(){
	float years,days;
	
	printf("Enter value to convert years into days: ");
	scanf("%f",&years);
	
	years=years*365;
	
	printf("days = %.5f",years);
	
	printf("\nEnter value to convert days into years: ");
	scanf("%f",&days);
	
	days=days/365;
	
	printf("years = %.5f",days);
	
	return 0;
}
