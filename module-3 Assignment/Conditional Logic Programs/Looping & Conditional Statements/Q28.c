#include<stdio.h>
int main(){
	int n, term = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", term);
        if(i % 2 == 0) {
            term *= 2;
        }
		else{
            term *= 3;
        }
    }
    printf("\n");
	
	return 0;
}
