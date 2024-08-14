#include<stdio.h>
int main(){
	int num1,num2,num3,num4,num5;
	unsigned long long fact1=1,fact2=1,fact3=1,fact4=1,fact5=1;

    printf("Enter 5 numbers:\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	
	for(int i=1;i<=num1;i++){
		fact1 = fact1 * i;
	}
	for(int i=1;i<=num2;i++){
		fact2 = fact2 * i;
	}
	for(int i=1;i<=num3;i++){
		fact3 = fact3 * i;
	}
	for(int i=1;i<=num4;i++){
		fact4 = fact4 * i;
	}
	for(int i=1;i<=num5;i++){
		fact5 = fact5 * i;
	}
	
    printf("Factorial of %d is %llu\n", num1, fact1);
    printf("Factorial of %d is %llu\n", num2, fact2);
    printf("Factorial of %d is %llu\n", num3, fact3);
    printf("Factorial of %d is %llu\n", num4, fact4);
    printf("Factorial of %d is %llu\n", num5, fact5);
		
	return 0;
}
