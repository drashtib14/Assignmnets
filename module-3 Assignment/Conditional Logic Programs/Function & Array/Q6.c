#include<stdio.h>
int main(){
	int a[10][10],b[10][10],sum[10][10],mul[10][10];
	int row,col,i,j,k,choice;
	
	printf("Enter the row numbers = ");
	scanf("%d",&row);
	printf("Enter the col numbers = ");
	scanf("%d",&col);
	
	printf("Enter 1 for addition \nEnter 2 for subtraction \nEnter 3 for multiplication \nEnter 4 for division\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			//addition
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					printf("Enter the element in a[%d][%d] = ",i,j);
					scanf("%d",&a[i][j]);
				}
			}
	
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					printf("Enter the element in b[%d][%d] = ",i,j);
					scanf("%d",&b[i][j]);
				}
			}
	
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					sum[i][j] = a[i][j] + b[i][j];
				}
			}
			
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					printf("%d ",sum[i][j]);
				}
				printf("\n");
			}
			break;
			
		case 2:
			//subtraction
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					printf("Enter the element in a[%d][%d] = ",i,j);
					scanf("%d",&a[i][j]);
				}
			}
	
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					printf("Enter the element in b[%d][%d] = ",i,j);
					scanf("%d",&b[i][j]);
				}
			}
	
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					sum[i][j] = a[i][j] - b[i][j];
				}
			}
			
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					printf("%d ",sum[i][j]);
				}
				printf("\n");
			}
			break;
			
		case 3:
			//multiplication
			for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf("Enter the element in a[%d][%d] = ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					printf("Enter the element in b[%d][%d] = ",i,j);
					scanf("%d",&b[i][j]);
				}
			}
			
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					mul[i][j] = 0;
					for(k=0;k<col;k++){
						mul[i][j] = mul[i][j] + (a[i][k]*b[k][j]);
					}
				}
			}
			
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					printf("%d ",mul[i][j]);
				}
				printf("\n");
			}
			break;
			
		case 4:
			//division
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					printf("Enter the element in a[%d][%d] = ",i,j);
					scanf("%d",&a[i][j]);
				}
			}
			
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					printf("Enter the element in b[%d][%d] = ",i,j);
					scanf("%d",&b[i][j]);
				}
			}
			
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					sum[i][j] = a[i][j] / b[i][j];
				}
			}
			
			for(i=0;i<row;i++){
				for(j=0;j<col;j++){
					printf("%d ",sum[i][j]);
				}
				printf("\n");
			}
			break;
			
		default:
			printf("Invalid input");			
	}
	
	return 0;
}
