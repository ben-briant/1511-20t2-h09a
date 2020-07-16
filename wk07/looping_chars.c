#include <stdio.h>

int is_lower_case(int ch);

int main (void) {
    
    int ch;
    ch = getchar();
    
    while (ch != EOF) {
        putchar(ch);
        
        ch = getchar();
    }
    
    return 0;
}


int is_lower_case(int ch) {
    int lower_case = 0;
    
    if (ch >= 'a' && ch <= 'z') {
        lower_case = 1;
    }
    
    return lower_case;
}










