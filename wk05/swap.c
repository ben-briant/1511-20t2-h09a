#include <stdio.h>

void swap(int *a, int *b);

int main (void) {
    int x = 7;
    int y = 5;
    
    printf("Variables before swap: x = %d, y = %d\n", x, y);
    
    swap(&x, &y);
    
    printf("Variables after swap: x = %d, y = %d\n", x, y);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
