#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *left;
    struct Node *right;
} Node;

static Node *create_node(int value)
{
    Node *node = malloc(sizeof *node);
    if (node == NULL) {
        return NULL;
    }
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

static int insert(Node **root, int value)
{
    if (*root == NULL) {
        *root = create_node(value);
        return *root != NULL;
    }
    if (value < (*root)->value) {
        return insert(&(*root)->left, value);
    }
    return insert(&(*root)->right, value);
}

static const Node *search(const Node *root, int value)
{
    while (root != NULL && root->value != value) {
        root = value < root->value ? root->left : root->right;
    }
    return root;
}

static void print_in_order(const Node *root)
{
    if (root != NULL) {
        print_in_order(root->left);
        printf("%d ", root->value);
        print_in_order(root->right);
    }
}

static void free_tree(Node *root)
{
    if (root != NULL) {
        free_tree(root->left);
        free_tree(root->right);
        free(root);
    }
}

int main(void)
{
    const int values[] = {50, 30, 20, 40, 70, 60, 80};
    const int count = (int)(sizeof values / sizeof values[0]);
    const int target = 60;
    Node *root = NULL;

    for (int i = 0; i < count; i++) {
        if (!insert(&root, values[i])) {
            fprintf(stderr, "Could not allocate a tree node.\n");
            free_tree(root);
            return 1;
        }
    }

    printf("In-order traversal: ");
    print_in_order(root);
    putchar('\n');

    if (search(root, target) != NULL) {
        printf("%d was found in the tree.\n", target);
    } else {
        printf("%d was not found in the tree.\n", target);
    }

    free_tree(root);
    return 0;
}
