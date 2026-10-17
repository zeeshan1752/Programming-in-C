#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to delete the second last node of the linked list
void deleteSecondLastNode(Node **START) {
    if (*START == NULL || (*START)->next == NULL) {
        // List is empty or has only one node
        printf("List is too short to delete the second last node.\n");
        return;
    }

    Node *prev = NULL;
    Node *current = *START;

    // Traverse to find the second last node
    while (current->next->next != NULL) {
        prev = current;
        current = current->next;
    }

    // Now, current is the second last node, and current->next is the last node
    // Delete the second last node
    if (prev != NULL) {
        prev->next = current->next; // Bypass the current node
        free(current); // Free the memory of the second last node
    }

    // If the second last node is the first node
    if (prev == NULL) {
        *START = (*START)->next;
        free(current);
    }
}

// Function to print the linked list
void printList(Node *START) {
    Node *temp = START;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to append a node to the end of the linked list
void append(Node **START, int newData) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    Node *last = *START;
    newNode->data = newData;
    newNode->next = NULL;
    
    if (*START == NULL) {
        *START = newNode;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

// Main function to test the deleteSecondLastNode function
int main() {
    Node *START = NULL;

    // Append some nodes to the linked list
    append(&START, 1);
    append(&START, 2);
    append(&START, 3);
    append(&START, 4);

    printf("Original list: ");
    printList(START);

    deleteSecondLastNode(&START);

    printf("List after deleting the second last node: ");
    printList(START);

    return 0;
}
