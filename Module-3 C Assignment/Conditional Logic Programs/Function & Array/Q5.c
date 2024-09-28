#include<stdio.h>
void sortArray(int arr[],int n,int order){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if((order == 1 && arr[i] > arr[j]) || (order == 2 && arr[i] < arr[j])){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	int n1,n2,choice;
	
	printf("Enter the size of first array = ");
	scanf("%d",&n1);
	int arr1[n1];
	
	printf("Enter the size of second array = ");
	scanf("%d",&n2);
	int arr2[n2];
	
	printf("Enter the element of first array = ");
	for(int i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter the element of second array = ");
	for(int i=0;i<n2;i++){
		scanf("%d",&arr2[i]);
	}
	
	printf("Choose sorting order: \n1 for Ascending \n2 for Descending\n");
	scanf("%d",&choice);
	
	sortArray(arr1,n1,choice);
    sortArray(arr2,n2,choice);
	
	printf("Sorted first array:\n");
    for (int i=0;i<n1;i++) {
        printf("%d\t",arr1[i]);
    }
    printf("\n\n");

    printf("Sorted second array:\n");
    for (int i=0;i<n2;i++) {
        printf("%d\t",arr2[i]);
    }
	
	return 0;
}
