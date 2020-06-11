// Program to figure out if I get breakfast
// Written by COMP1511 H09A on 06/2020

/*
This is commented! Yay!
*/

#include <stdio.h>

#define EARLY 7
#define NOT_LATE 9

int main (void) {
    int woke_up;
    printf("What time did you wake up? ");
    scanf("%d", &woke_up);
    
    // If I woke up early, I get breakfast
    if (woke_up < EARLY) {
        printf("You get a hot breakfast! Hurrah!\n");
    } else if (woke_up <= NOT_LATE) {
        printf("You get a cold breakfast...\n");
    } else {
        printf("You don't get breakfast, and you are fired.\n");
    }

    return 0;
}
