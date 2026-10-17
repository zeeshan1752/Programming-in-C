#include <stdio.h>
#include <stdlib.h>

// Define structure for a node in the tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node with a given value
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

// Function to search a value in the BST
struct Node* search(struct Node* root, int value) {
    if (root == NULL || root->data == value) {
        return root;
    }

    if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

// Function for In-order traversal (Left, Root, Right)
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct Node* root = NULL;

    // Predefined input values
    int values[] = {50, 30, 20, 40, 70, 60, 80};
    int size = sizeof(values) / sizeof(values[0]);
    int valueToSearch = 60;

    // Display the predefined input
    printf("Predefined Input:\n");
    printf("Values to insert into BST: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", values[i]);
    }
    printf("\nValue to search: %d\n\n", valueToSearch);

    // Insert nodes into the BST
    for (int i = 0; i < size; i++) {
        root = insert(root, values[i]);
    }

    // Display BST traversal
    printf("In-order traversal of the BST: ");
    inorderTraversal(root);
    printf("\n");

    // Search for a value
    struct Node* result = search(root, valueToSearch);
    if (result != NULL) {
        printf("Value %d found in the BST.\n", valueToSearch);
    } else {
        printf("Value %d not found in the BST.\n", valueToSearch);
    }

    return 0;
}
