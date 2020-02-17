#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int create_sort_list(struct node **head, int num) {
    struct node *a = (struct node *)malloc(sizeof(struct node));
    a->data = num;

    if (*head == NULL) {
        a->next = *head;
        *head = a;
    }else {
        struct node *b = *head;
        struct node *prev = NULL;
        while (1) {
            if (b == NULL || b->data >= a->data) {
                break;
            }prev = b;
            b = b->next; 
        }a->next = b;
        if (prev != NULL) {
            prev->next = a;
        }else {
            *head = a;
        }
    }
}

void print_list(struct node *head) {
    struct node *tmp = head;
    for (tmp=head; tmp; tmp = tmp->next)
    printf("%d\n", tmp->data);
}

int main() {
    struct node *head = NULL;
    int input;
    int i = 0;
    while (scanf("%d", &input) == 1) {
        if (input == -1){
            break;
        }else{
            create_sort_list(&head,input); 
        }
    }print_list(head);
}