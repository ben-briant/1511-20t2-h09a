#include <stdio.h>

int is_lower_case(int ch);

int main (void) {
    int ch = 'A';
    //putchar(ch);
    
    ch = ch + 4;
    //putchar(ch);
    
    printf("%c is ", ch);
    if (is_lower_case(ch)) {
        printf("Lower case!\n");
    } else {
        printf("Upper case!\n");
    }
    
    putchar('\n');
    return 0;
}


int is_lower_case(int ch) {
    int lower_case = 0;
    
    if (ch >= 'a' && ch <= 'z') {
        lower_case = 1;
    }
    
    return lower_case;
}










