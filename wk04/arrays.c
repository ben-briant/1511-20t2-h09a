// Simple program working with arrays
// Written by H09A on 25/06/2020

#include <stdio.h>

#define SIZE 5

int main (void) {
    int array[SIZE][SIZE] = {0};
    
    int i = 0;
    while (i < SIZE) {
        array[i] = 1;
        i++;
    }
    
    i = 0;
    while (i < SIZE) {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
    
    return 0;
}
