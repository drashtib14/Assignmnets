#include<stdio.h>
int main(){
	int numbers[5];
	
	printf("Enter 5 numbers: \n");
	for(int i=0;i<5;i++){
		printf("Enter number %d = ",i+1);
		scanf("%d",&numbers[i]);
	}
	
	for(int i=0;i<5-1;i++){
		for(int j=0;j<5-i-1-i;j++){
			if(numbers[j] > numbers[j + 1]){
				int temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
		}
	}
	
	printf("\nThe numbers in ascending orders are: \n");
	for(int i=0;i<5;i++){
		printf("%d ",numbers[i]);
	}
	
	return 0;
}
