#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME_MAX 30

struct student {
    int zID;
    double mark;
    char name[NAME_MAX];
    struct student *next;
};

void print_student(struct student *profile);

struct student *create_student(
    int zID, double mark, 
    char name[NAME_MAX]);

int main (void) {

    struct student *chicken = create_student(5252525, 71, "Chicken");
    struct student *frankie = create_student(5151515, 60.2, "Frankie");
    
    chicken->next = frankie;
    
    struct student *class = chicken;
    
    // int i = 0;
    struct student *curr = class;
    while (curr != NULL) {
        print_student(curr);
        
        curr = curr->next;
    }
    
    free(chicken);
    free(frankie);
    
    return 0;
}

// Malloc space for a new student, and fill its fields.
struct student *create_student(
    int zID, double mark, 
    char name[NAME_MAX]) {
    
    // Malloc space for a 'struct student'
    struct student *new = malloc(sizeof(struct student));
    // Fill the fields of our new student
    new->zID = zID;
    new->mark = mark;
    strcpy(new->name, name);
    new->next = NULL;
    // Return a pointer to the struct we created
    return new;
}

// Function to print information about a student.
void print_student(struct student *profile) {
    printf("Student:\n");
    printf("zID : %d\n", profile->zID);
    printf("mark: %lf\n", profile->mark);
    printf("name: %s\n", profile->name);
}










