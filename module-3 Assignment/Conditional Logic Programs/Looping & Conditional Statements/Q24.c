#include<stdio.h>
int main(){
	int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i=1;i<=n;i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nSum: %d\n", sum);
    
	return 0;
}
