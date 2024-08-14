#include<stdio.h>
int main(){
	int num[100][100];
	int row,col,i,j;
	
	printf("Enter the row numbers = ");
	scanf("%d",&row);
	printf("Enter the col numbers = ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter the element in num[%d][%d] = ",i,j);
			scanf("%d",&num[i][j]);
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
