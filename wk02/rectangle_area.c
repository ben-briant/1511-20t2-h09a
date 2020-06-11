// Program to calculate the area of a rectangle
// Written by COMP1511 H09A on 06/2020

#include <stdio.h>

int main (void) {
    double length, width;
    
    printf("Please enter rectangle length: ");
    scanf("%lf", &length);
    
    printf("Please enter rectangle width: ");
    scanf("%lf", &width);
    
    
    printf("Area = %lf\n", length * width);
    
    return 0;
}
