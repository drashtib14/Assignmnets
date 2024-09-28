#include<stdio.h>
int main(){
	int month,days;
	
	printf("Enter any number of month: ");
	scanf("%d",&month);
	
	if(month==1){
		days=31;
	}
	else if(month==2){
		days=28;
	}
	else if(month==3){
		days=31;
	}
	else if(month==4){
		days=30;
	}
	else if(month==5){
		days=31;
	}
	else if(month==6){
		days=30;
	}
	else if(month==7){
		days=31;
	}
	else if(month==8){
		days=31;
	}
	else if(month==9){
		days=30;
	}
	else if(month==10){
		days=31;
	}
	else if(month==11){
		days=30;
	}
	else if(month==12){
		days=31;
	}
	else{
		printf("Invalid month");
		return 1;
	}
	
	printf("This month has %d days",days);
	
	return 0;
}
