#include<stdio.h>
#include<string.h>
int main(){
	int numbers[5];
	
	printf("Enter 5 numbers: \n");
	for(int i=0;i<5;i++){
		printf("Number %d: ",i+1);
		scanf("%d",&numbers[i]);
	}
	
	printf("\nThe numbers are:\n");
    for (int i=0;i<5;i++) {
    	if(numbers[i] % 2 == 0){
    		printf("Number %d is even\n",numbers[i]);
		}
		else{
			printf("Number %d is odd\n",numbers[i]);
		}
    }
    
	return 0;
}
