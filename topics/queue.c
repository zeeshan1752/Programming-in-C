#include <stdio.h>

#define CAPACITY 100

int main(void)
{
    int values[CAPACITY];
    int front = 0;
    int count = 0;

    for (;;) {
        int choice;
        puts("\nQueue menu: 1 enqueue, 2 dequeue, 3 display, 0 quit");
        printf("Choice: ");
        if (scanf("%d", &choice) != 1) {
            fprintf(stderr, "Invalid menu input.\n");
            return 1;
        }

        if (choice == 0) {
            return 0;
        } else if (choice == 1) {
            if (count == CAPACITY) {
                puts("Queue is full.");
                continue;
            }
            printf("Value to enqueue: ");
            if (scanf("%d", &values[(front + count) % CAPACITY]) != 1) {
                fprintf(stderr, "Invalid integer input.\n");
                return 1;
            }
            count++;
        } else if (choice == 2) {
            if (count == 0) {
                puts("Queue is empty.");
            } else {
                printf("Dequeued: %d\n", values[front]);
                front = (front + 1) % CAPACITY;
                count--;
            }
        } else if (choice == 3) {
            if (count == 0) {
                puts("Queue is empty.");
            } else {
                printf("Front to back: ");
                for (int i = 0; i < count; i++) {
                    int index = (front + i) % CAPACITY;
                    printf("%d%s", values[index], i + 1 == count ? "\n" : " ");
                }
            }
        } else {
            puts("Choose 0, 1, 2, or 3.");
        }
    }
}
