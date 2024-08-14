#include<stdio.h>
int main(){
	char choice;
	int ans,n1,n2;
	
	printf("Enter + for Additon \nEnter - for Subtraction \nEnter * for Multiplication \nEnter / for Division \nEnter %% for Modulo\n");
	scanf("%c",&choice);
	
	printf("Enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	
	switch(choice){
		case '+':
			ans=n1+n2;
			printf("%d is addition",ans);
			break;
		case '-':
			ans=n1-n2;
			printf("%d is subtraction",ans);
			break;
		case '*':
			ans=n1*n2;
			printf("%d is multiplication",ans);
			break;
		case '/':
			if(n2!=0){
				ans=n1/n2;
				printf("%d is division",ans);
			}
			else{
				printf("Cannot divide by zero");
			}
			break;
		case '%':
			ans=n1%n2;
			printf("%d modulo",ans);
			break;
		default:
			printf("Invalid choice");
	}
	
	return 0;
}
