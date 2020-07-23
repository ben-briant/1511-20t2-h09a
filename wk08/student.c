#include <stdio.h>
#include <string.h>

#define NAME_MAX 30

struct student {
    int zID;
    double mark;
    char name[NAME_MAX];
};

void print_student(struct student profile);

int main (void) {

    struct student frankie;
    
    frankie.zID = 5151515;
    frankie.mark = 60.2;
    // WILL NOT WORK
    // frankie.name = "Frankie";
    strcpy(frankie.name, "Frankie");
    
    print_student(frankie);
    
    return 0;
}

// Function to print information about a student.
void print_student(struct student profile) {
    printf("Student:\n");
    printf("zID : %d\n", profile.zID);
    printf("mark: %lf\n", profile.mark);
    printf("name: %s\n", profile.name);
}










