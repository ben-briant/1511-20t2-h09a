#include <stdio.h>

int main (void) {
    
    int finish;
    printf("Enter finish: ");
    scanf("%d", &finish);

    int i = 1;
    while (i <= finish) {
        printf("%d\n", i);
        
        i++;
    }
    
    return 0;
}
