#include <stdio.h>

// Heapify function
void heapify(int arr[], int n, int i) {
    int temp, maximum, left_index, right_index;

    // Assume current index i holds the largest value
    maximum = i;

    // Left and right child indices
    left_index = 2 * i + 1;
    right_index = 2 * i + 2;

    // If left child is greater than root
    if (left_index < n && arr[left_index] > arr[maximum])
        maximum = left_index;

    // If right child is greater than current maximum
    if (right_index < n && arr[right_index] > arr[maximum])
        maximum = right_index;

    // If largest is not root
    if (maximum != i) {
        temp = arr[i];
        arr[i] = arr[maximum];
        arr[maximum] = temp;

        // Recursively heapify the affected sub-tree
        heapify(arr, n, maximum);
    }
}

// Heap Sort function
void heapsort(int arr[], int n) {
    int i, temp;

    // Build a max heap (heapify non-leaf nodes)
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements from heap one by one
    for (i = n - 1; i > 0; i--) {
        // Move current root to end
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Heapify the reduced heap
        heapify(arr, i, 0);
    }
}

// Driver code
int main() {
    // Initializing the array
    int arr[] = {20, 18, 5, 15, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Displaying original array
    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Perform Heap Sort
    heapsort(arr, n);

    // Displaying sorted array
    printf("Sorted array (Heap Sort): ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}