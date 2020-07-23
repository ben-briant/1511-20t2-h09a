#include <stdio.h>
#include <ctype.h>

int main (int argc, char *argv[]) {
    printf("The number of command line arguments was %d\n", argc);
    
    int i = 1;
    // Loop through arguments
    while (i < argc) {
        int j = 0;
        // Loop through each char in current argument
        while (argv[i][j] != '\0') {
            argv[i][j] = toupper(argv[i][j]);
            
            j++;
        }
        printf("%s\n", argv[i]);
        
        i++;
    }

    return 0;
}
