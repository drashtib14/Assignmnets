#include<stdio.h>
int main(){
	int n;
	double sum = 0.0;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        double term = (double)i / (i + 1);
        if(i % 2 == 0){
            term = -term;
        }
        printf("%.2f ", term);
        sum += term;
    }
    printf("\nSum: %.2f\n", sum);
	
	return 0;
}
