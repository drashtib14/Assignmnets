#include<stdio.h>
int main(){
	int num;
	int even_cnt = 0,odd_cnt = 0;
	int even_sum = 0,odd_sum = 0;
	
	printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            even_cnt++;
            even_sum += num;
        } else {
            odd_cnt++;
            odd_sum += num;
        }
    }

    printf("Total even numbers: %d\n", even_cnt);
    printf("Total odd numbers: %d\n", odd_cnt);
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);
	
	return 0;
}
