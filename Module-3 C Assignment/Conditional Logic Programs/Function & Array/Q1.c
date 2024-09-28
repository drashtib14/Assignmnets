#include<stdio.h>
int findMax(int arr[],int n);

int main(){
	int numbers[] = {3,7,2,5,10,6};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	
	int maxNumber = findMax(numbers,size);
	printf("The maximum number is = %d",maxNumber);
	
	return 0;
}

int findMax(int arr[],int n){
	int max = arr[0];
	
	for(int i=0;i<n;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
	return max;
}
