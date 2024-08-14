#include<stdio.h>
int main() {
	int count=1,sum=0,num;

	printf("Enter 10 numbers:\n");
	
	while (count <= 10) {
        printf("Enter number %d: ",count);
        scanf("%d",&num);
        sum += num;
        count++;
    }
    
    printf("\nSum of the 10 numbers is: %d\n", sum);

    return 0;
}
