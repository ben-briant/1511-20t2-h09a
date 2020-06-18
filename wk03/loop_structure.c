#include <stdio.h>

int main (void) {
    // 1: Looping variable
    int i = 0;
    // 2: Loop condition
    while (i < 10) {
        // 3: Do something!
        printf("%d\n", i);
        
        // 4: Loop incrementor
        // i = i + 1;
        // i += 1;
        i++;
    }
    
    return 0;
}
