#include<stdio.h>
int main(){
	int rows,k=1;
	
	printf("Enter the rows: ");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	
	return 0;
}
