#include <stdio.h>

int main() {
    float weight[50], profit[50], ratio[50];
    float Totalvalue = 0, temp, capacity;
    int n, i, j;

    // Input number of items
    printf("Enter the number of items: ");
    scanf("%d", &n);

    // Input weight and profit for each item
    for (i = 0; i < n; i++) {
        printf("Enter Weight and Profit for item[%d]:\n", i + 1);
        scanf("%f %f", &weight[i], &profit[i]);
    }

    // Input knapsack capacity
    printf("Enter the capacity of knapsack: ");
    scanf("%f", &capacity);

    // Calculate profit/weight ratio
    for (i = 0; i < n; i++)
        ratio[i] = profit[i] / weight[i];

    // Sort items based on ratio (Descending order)
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                // Swap ratio
                temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;

                // Swap weight
                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;

                // Swap profit
                temp = profit[i];
                profit[i] = profit[j];
                profit[j] = temp;
            }
        }
    }

    // Display sorted items
    printf("\nItems sorted by profit/weight ratio:\n");
    printf("Item\tWeight\tProfit\tRatio\n");
    for (i = 0; i < n; i++)
        printf("%d\t%.2f\t%.2f\t%.2f\n", i + 1, weight[i], profit[i], ratio[i]);

    // Greedy selection
    printf("\nKnapsack problem using Greedy Algorithm:\n");
    for (i = 0; i < n; i++) {
        if (weight[i] > capacity)
            break;
        else {
            Totalvalue += profit[i];
            capacity -= weight[i];
        }
    }

    // Take fraction of next item if capacity not full
    if (i < n)
        Totalvalue += ratio[i] * capacity;

    // Display final result
    printf("\nThe maximum total profit is: %.2f\n", Totalvalue);

    return 0;
}
