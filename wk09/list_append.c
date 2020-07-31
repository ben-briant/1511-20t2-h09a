#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    Node next;
};

struct node *list_append(struct node *list1, struct node *list2) {
    // If the first list is empty, then the appended list is list2
    if (list1 == NULL) {
        return list2;
    }
    // Move to the end of list1
    struct node *curr = list1;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    // Make the last node in list1 point to list 2
    curr->next = list2;
    
    // Return the head of the new list
    return list1;
}
