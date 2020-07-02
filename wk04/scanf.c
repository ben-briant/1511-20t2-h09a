// Program to demonstrate the return value of scanf.
// H09A 25/06/2020

#include <stdio.h>

#define SIZE 5

int main (void) {
    int command;
    printf("Enter instruction: ");
    while (scanf("%d", &command) == 1) {
        // Process command
        printf("Command was %d\n", command);
        
        printf("Enter instruction: ");
    }
    
}

