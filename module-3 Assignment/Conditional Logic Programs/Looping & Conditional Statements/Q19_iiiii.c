#include<stdio.h>
int main(){
	int rows;
	
	printf("Enter the rows: ");
	scanf("%d",&rows);
	
	int spc = rows - 1;
	
	for(int i=1;i<=rows;i++){
		for(int j=spc;j>=1;j--){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
		spc--;
	}
	
	return 0;
}
