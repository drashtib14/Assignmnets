#include<stdio.h>
int main(){
	int days,month;
	
	printf("Enter number of days: ");
	scanf("%d",&days);
	
	month=days/30;
	days = days % 30 ;
	
	printf("Months = %d Days = %d",month,days) ;
	
	return 0;
}
