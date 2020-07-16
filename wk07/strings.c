#include <stdio.h>

int main (void) {
    char word[6];
    
    fgets(word, 6, stdin);
    
    printf("%s\n", word);
    
    return 0;
}
