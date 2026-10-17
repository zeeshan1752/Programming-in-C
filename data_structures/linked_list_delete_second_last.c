#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

static int append(Node **head, int value)
{
    Node *node = malloc(sizeof *node);
    if (node == NULL) {
        return 0;
    }
    node->value = value;
    node->next = NULL;

    if (*head == NULL) {
        *head = node;
        return 1;
    }

    Node *last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = node;
    return 1;
}

static void delete_second_last(Node **head)
{
    if (*head == NULL || (*head)->next == NULL) {
        puts("The list needs at least two nodes to delete its second-last node.");
        return;
    }

    if ((*head)->next->next == NULL) {
        Node *old_head = *head;
        *head = old_head->next;
        free(old_head);
        return;
    }

    Node *previous = *head;
    while (previous->next->next->next != NULL) {
        previous = previous->next;
    }

    Node *second_last = previous->next;
    previous->next = second_last->next;
    free(second_last);
}

static void print_list(const Node *head)
{
    while (head != NULL) {
        printf("%d -> ", head->value);
        head = head->next;
    }
    puts("NULL");
}

static void free_list(Node *head)
{
    while (head != NULL) {
        Node *next = head->next;
        free(head);
        head = next;
    }
}

int main(void)
{
    Node *head = NULL;
    for (int value = 1; value <= 4; value++) {
        if (!append(&head, value)) {
            fprintf(stderr, "Could not allocate a list node.\n");
            free_list(head);
            return 1;
        }
    }

    printf("Original list: ");
    print_list(head);
    delete_second_last(&head);
    printf("After deletion: ");
    print_list(head);
    free_list(head);
    return 0;
}
