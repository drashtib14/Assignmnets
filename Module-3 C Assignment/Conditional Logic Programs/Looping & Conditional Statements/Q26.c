#include<stdio.h>
int main(){
	int n, sum = 0,temp=0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Series: ");
    for(int i=1;i<=n;i++){
    	temp += i;
        printf("%d ", temp);
        sum += temp;
	}
	
	printf("\n\nSum of sums is %d\n",sum);
	
	return 0;
}
