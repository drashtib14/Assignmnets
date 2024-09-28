#include <stdio.h>
int main() {
    int num, max_digit = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10; 
        if (digit > max_digit) {
            max_digit = digit; 
        }
        num = num / 10;
    }

    printf("Max digit is %d\n", max_digit);

    return 0;
}
