// implements functions in list.h
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "list.h"

#define FALSE 0
#define TRUE !FALSE

// ======= W10 Tut Problems ========
// returns a copy of the linked list
struct node *copy(struct node *head) {
    if (head == NULL) return NULL;
    
    struct node *new_head = create_node(head->data);
    
    struct node *curr = head;
    curr = curr->next;
    struct node *curr_new = new_head;
    while (curr != NULL) {
        struct node *new = create_node(curr->data);
        curr_new->next = new;
        
        curr_new = curr_new->next;
        curr = curr->next;
    }
    
    return new_head;
}

// returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *head1, struct node *head2) {
    struct node *curr1 = head1;
    struct node *curr2 = head2;
    
    int is_identical = TRUE;
    
    while (curr1 != NULL && curr2 != NULL) {
        if (curr1->data != curr2->data) {
            is_identical = FALSE;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    
    if (curr1 != NULL || curr2 != NULL) {
        is_identical = FALSE;
    }
    
    return is_identical;
}

// returns 1 if list is in strictly increasing order, otherwise returns 0
int ordered(struct node *head) {
    if (head == NULL) {
        return 1;
    }
    
    int prev_value = head->data;
    int is_increasing = 1;
    
    struct node *curr = head;
    while (curr != NULL) {
        int curr_value = curr->data;
        if (curr_value <= prev_value) {
            is_increasing = 0;
        }
        
        prev_value = curr_value;
        
        curr = curr->next;
    }
    return is_increasing;
}

// given two lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in both set1 and set2
struct node *set_intersection(struct node *set1, struct node *set2) {
    struct node *new_head = NULL;

    struct node *curr1 = set1;

    struct node *curr_new = new_head;    
        
    while (curr1 != NULL) {
        int is_match = 0;
        struct node *curr2 = set2;
        while (curr2 != NULL) {
            if (curr1->data == curr2->data) {
                is_match = 1;
            }
            
            curr2 = curr2->next;
        }
        
        if (is_match) {
            struct node *new = create_node(curr1->data);
            if (new_head == NULL) {
                new_head = new;
                curr_new = new_head;
            } else {
                curr_new->next = new;
                curr_new = curr_new->next;
            }
        }
        
        curr1 = curr1->next;
    }
    return new_head;
}

// =================================

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
struct node *create_list(int values[], int size) {
    int i = 0;

    if (size <= 0) {
        // empty linked list (or invalid size)
        return NULL;
    }

    struct node *head = NULL;   // head of the linked list
    struct node *tmp = NULL;    // temporary item we're working with
    struct node *curr = NULL;   // current node we're looking at in the linked list

    while (i < size) {
        tmp = create_node(values[i]);

        // link this node onto our list
        if (head == NULL) {
            // this is the first node in the list
            head = tmp;
            curr = head;
        } else {
            // this is not the first node in the list
            // add it to the end, i.e. after curr
            curr->next = tmp;

            // reset curr to point at the new last node
            curr = tmp;
        }
        i = i + 1;
    }

    return head;
}

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int dat) {
    struct node *new = malloc(sizeof(struct node));
    assert(new != NULL);
    new->data = dat;
    new->next = NULL;

    return new;
}

// prints out the list given the head of a list
void print_list(struct node *head) {
    struct node *curr;
    curr = head;

    while (curr != NULL) {
        printf("[ %d ]-->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

}

// frees all the elements in a linked list
void free_list(struct node *head) {
    if (head == NULL) {
        return;
    }
    free_list(head->next);
    free(head);
}

// return the number of items in the linked list
int num_items(struct node *head) {
    struct node *curr = head;
    int count = 0;

    while (curr != NULL) {
        count = count + 1;
        curr = curr->next;
    }

    return count;
}
