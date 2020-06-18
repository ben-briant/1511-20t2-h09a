#include <stdio.h>

int main (void) {
    // Start loop at 1
    int i = 1;
    // Loop until 42
    while (i <= 42) {
        // Print the value of i every loop
        printf("%d\n", i);
        
        // increase i by 1 (same as i = i + 1, i += 1)
        i++;
    }
    
    return 0;
}
