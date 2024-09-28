#include<stdio.h>
int fact(int num);

int main(){
	int result;
	result = fact(5);
	printf("\nFactorial is = %d",result);
	
	return 0;
}
int fact(int num)
{
	if(num>1)
	{
		return num * fact(num-1);
	}
	else{
		return 1;
	}
}
