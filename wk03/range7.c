#include <stdio.h>

int main (void) {
    
    int start;
    printf("Enter start: ");
    scanf("%d", &start);
    
    int finish;
    printf("Enter finish: ");
    scanf("%d", &finish);

    int i = start;
    while (i <= finish) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
        
        i++;
    }
    
    return 0;
}
