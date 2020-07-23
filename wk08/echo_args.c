#include <stdio.h>

int main (int argc, char *argv[]) {
    printf("The number of command line arguments was %d\n", argc);
    
    int i = 1;
    while (i < argc) {
        printf("%s\n", argv[i]);
        
        i++;
    }

    return 0;
}
