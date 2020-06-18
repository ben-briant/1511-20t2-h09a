#include <stdio.h>

#define SIZE 5

int main (void) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col <= SIZE) {
            if (col == 0 || row == col) {
                printf("*");
            } else {
                printf(" ");
            }
            
            col++;
        }
        printf("\n");
        row++;
    }
}
