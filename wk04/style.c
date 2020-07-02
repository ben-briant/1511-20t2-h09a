// Program to check if user is in high school
// Written by (???) and improved by H09A on 25/6/2020

#include <stdio.h>

#define LOWEST_YEAR 7
#define HIGHEST_YEAR 12

int main(void) {
    printf("What year are you in? ");
    int user_year = 0;
    scanf("%d", &user_year);
    
    // Check if the user is between the start and end of high school
    if (user_year >= LOWEST_YEAR && user_year <= HIGHEST_YEAR) {
        printf("You are in high school\n");
    } else {
        printf("You are not in high school\n");
    }
    return 0;
}
