#include <stdio.h>

void sum_multiply_nums(int num1, int num2, int *sum, int *multiply);

int main (void) {
    int a = 5;
    int b = 7;
    
    int sum;
    int multiply;
    
    sum_multiply_nums(a, b, &sum, &multiply);
    
    printf("Sum = %d\nMultiple = %d\n", sum, multiply);
}

void sum_multiply_nums(int num1, int num2, int *sum, int *multiply) {
    *sum = num1 + num2;
    *multiply = num1 * num2;
}
