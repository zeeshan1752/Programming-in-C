#include <stdio.h>

#define CAPACITY 100

int main(void)
{
    int values[CAPACITY];
    int top = -1;

    for (;;) {
        int choice;
        puts("\nStack menu: 1 push, 2 pop, 3 display, 0 quit");
        printf("Choice: ");
        if (scanf("%d", &choice) != 1) {
            fprintf(stderr, "Invalid menu input.\n");
            return 1;
        }

        if (choice == 0) {
            return 0;
        } else if (choice == 1) {
            if (top == CAPACITY - 1) {
                puts("Stack is full.");
                continue;
            }
            printf("Value to push: ");
            if (scanf("%d", &values[top + 1]) != 1) {
                fprintf(stderr, "Invalid integer input.\n");
                return 1;
            }
            top++;
        } else if (choice == 2) {
            if (top < 0) {
                puts("Stack is empty.");
            } else {
                printf("Popped: %d\n", values[top--]);
            }
        } else if (choice == 3) {
            if (top < 0) {
                puts("Stack is empty.");
            } else {
                printf("Top to bottom: ");
                for (int i = top; i >= 0; i--) {
                    printf("%d%s", values[i], i == 0 ? "\n" : " ");
                }
            }
        } else {
            puts("Choose 0, 1, 2, or 3.");
        }
    }
}
