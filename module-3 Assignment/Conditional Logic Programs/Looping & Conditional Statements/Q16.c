#include<stdio.h>
int main() {
    int n,sum = 0,i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (i <= n) {
        sum += i; 
        i++;
    }

    printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}

