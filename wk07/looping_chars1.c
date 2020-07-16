#include <stdio.h>

int to_upper_case(int ch);

int main (void) {
    
    int ch;
    
    
    while ((ch = getchar()) != EOF) {
        ch = to_upper_case(ch);
        
        putchar(ch);
    }
    
    return 0;
}


int to_upper_case(int ch) {
    
    if ('a' <= ch && ch <= 'z') {
        // ch = 'A' + (ch - 'a');
        ch = ch + ('A' - 'a');
    }
    
    return ch;
}










