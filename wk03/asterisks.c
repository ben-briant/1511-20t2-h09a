#include <stdio.h>

int main (void) {
    int num_asterisks;
    printf("Please enter an integer: ");
    scanf("%d", &num_asterisks);
    
    int i = 0;
    while (i < num_asterisks) {
        printf("*\n");
        
        i++;
    }
    
    return 0;   
}
