#include <stdio.h>

#define MAX_ITEMS 50

typedef struct {
    double weight;
    double profit;
    double ratio;
} Item;

int main(void)
{
    Item items[MAX_ITEMS];
    int count;
    double capacity;

    printf("Number of items (1-%d): ", MAX_ITEMS);
    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_ITEMS) {
        fprintf(stderr, "Enter an item count from 1 to %d.\n", MAX_ITEMS);
        return 1;
    }

    for (int i = 0; i < count; i++) {
        printf("Weight and profit for item %d: ", i + 1);
        if (scanf("%lf %lf", &items[i].weight, &items[i].profit) != 2 ||
            items[i].weight <= 0.0 || items[i].profit < 0.0) {
            fprintf(stderr, "Each weight must be positive and each profit non-negative.\n");
            return 1;
        }
        items[i].ratio = items[i].profit / items[i].weight;
    }

    printf("Knapsack capacity: ");
    if (scanf("%lf", &capacity) != 1 || capacity < 0.0) {
        fprintf(stderr, "Enter a non-negative capacity.\n");
        return 1;
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (items[j].ratio > items[i].ratio) {
                Item temporary = items[i];
                items[i] = items[j];
                items[j] = temporary;
            }
        }
    }

    double remaining = capacity;
    double total_profit = 0.0;
    puts("Selection by descending profit-to-weight ratio:");
    for (int i = 0; i < count && remaining > 0.0; i++) {
        double fraction = remaining < items[i].weight
            ? remaining / items[i].weight
            : 1.0;
        double selected_weight = fraction * items[i].weight;
        double selected_profit = fraction * items[i].profit;
        printf("Item %d: take %.2f%% (weight %.2f, profit %.2f)\n",
               i + 1, fraction * 100.0, selected_weight, selected_profit);
        total_profit += selected_profit;
        remaining -= selected_weight;
    }

    printf("Maximum profit for this greedy strategy: %.2f\n", total_profit);
    return 0;
}
