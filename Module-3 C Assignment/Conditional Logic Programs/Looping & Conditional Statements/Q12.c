#include<stdio.h>
#include<math.h>
int main(){
	int num,count=0,rem,sum=0,power;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	int copy1 = num;
	int copy2 = num;
	
	//find count of digits
	while(num!=0){
		count++;
		num = num/10;
	}
	
	while(copy1!=0){
		rem = copy1%10;
		power = pow(rem,count);
		sum = sum + power;
		copy1 = copy1/10;
	}
	
	if(copy2==sum){
		printf("\n%d is the armstrong number",copy2);
	}
	else{
		printf("\n%d is not the armstrong number",copy2);
	}
	
	return 0;
}
