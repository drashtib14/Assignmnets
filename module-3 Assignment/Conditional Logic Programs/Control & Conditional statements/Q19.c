#include<stdio.h>
int main(){
	int id,unit;
	char name;
	float charge,total,bill,final_bill;
	
	printf("Enter your ID: ");
	scanf("%d",&id);
	printf("Enter your Name: ");
	scanf("%s",&name);
	printf("Enter your Unit in digits: ");
	scanf("%d",&unit);
	
	if(unit>0 && unit<350){
		charge=1.20;
	}	
	else if(unit>=350 && unit<600){
		charge=1.50;
	}
	else if(unit>=600 && unit<800){
		charge=1.80;
	}
	else if(unit>=800){
		charge=2.00;
	}
	else{
		printf("Invalid unit");
	}
	
	total=unit*charge;
	printf("\nYour unit charge is: %.2f",charge);
	printf("\nTotal amount to be paid: %.2f",total);
	
	printf("\nEnter the bill amount: ");
    scanf("%f", &bill);
    
    if (bill > 800) {
        final_bill = bill + (0.18 * bill);
    } 
	else if(bill<256){
        final_bill = bill;
    }
    else{
    	final_bill=bill;
	}
    
    printf("The final bill amount is: Rs. %.2f\n", final_bill);
    
	return 0;
}
