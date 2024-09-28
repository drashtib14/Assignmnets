#include<stdio.h>
int main(){
	int d,m,y;
	
	printf("Enter number of Years: ");
	scanf("%d",&y);
	
	m=y*12;
	d=y*365;
	
	printf("days are %d and months are %d",d,m);
	
	return 0;
}
