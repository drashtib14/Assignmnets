#include<stdio.h>
int main(){
	int rows;
	char ch = 'A';
	
	printf("Enter the rows: ");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			printf("%c ",ch + (j - 1));
		}
		printf("\n");
	}
	
	return 0;
}
