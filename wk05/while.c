#include <stdio.h>

int main (void) {
    int i = 0;
    while (i < 10) {
        if (i == 5) {
            break;
            // i = 10;
        }
        printf("%d\n", i);
        i++;
    }
    printf("FINISHED!\n");
}
