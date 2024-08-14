#include<stdio.h>
int main(){
	int min,sec,hour;
	
	printf("Enter Minutes: ");
	scanf("%d",&min);
	
	sec=min*60;
	hour=min/60;
	
	printf("Seconds are %d and Hours are %d",sec,hour);
	
	return 0;
}
