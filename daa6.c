// importing the standard I/O header file
#include <stdio.h>

// defining some constants
#define INF 9999
#define MAX 10

// function prototype
void DijkstraAlgorithm(int Graph[MAX][MAX], int size, int start);

// defining the function for Dijkstra's Algorithm
void DijkstraAlgorithm(int Graph[MAX][MAX], int size, int start) {
    int cost[MAX][MAX], distance[MAX], previous[MAX];
    int visited_nodes[MAX], counter, minimum_distance, next_node, i, j;

    // creating cost matrix
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (Graph[i][j] == 0)
                cost[i][j] = INF;
            else
                cost[i][j] = Graph[i][j];
        }
    }

    for (i = 0; i < size; i++) {
        distance[i] = cost[start][i];
        previous[i] = start;
        visited_nodes[i] = 0;
    }

    distance[start] = 0;
    visited_nodes[start] = 1;
    counter = 1;

    while (counter < size - 1) {
        minimum_distance = INF;

        for (i = 0; i < size; i++) {
            if (distance[i] < minimum_distance && !visited_nodes[i]) {
                minimum_distance = distance[i];
                next_node = i;
            }
        }

        visited_nodes[next_node] = 1;

        for (i = 0; i < size; i++) {
            if (!visited_nodes[i]) {
                if (minimum_distance + cost[next_node][i] < distance[i]) {
                    distance[i] = minimum_distance + cost[next_node][i];
                    previous[i] = next_node;
                }
            }
        }
        counter++;
    }

    // printing the distance
    for (i = 0; i < size; i++) {
        if (i != start) {
            printf("\nDistance from Source Node %d to Node %d: %d", start, i, distance[i]);
        }
    }
}

// main function
int main() {
    int Graph[MAX][MAX];
    int size = 7, source = 0;

    // defining the adjacency matrix for the graph
    int tempGraph[7][7] = {
        {0, 4, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0},
        {0, 0, 7, 0, 9, 14, 0},
        {0, 0, 0, 9, 0, 10, 2},
        {8, 11, 4, 14, 10, 0, 2},
        {0, 0, 0, 0, 2, 2, 0}
    };

    // copying values to Graph
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            Graph[i][j] = tempGraph[i][j];

    // calling Dijkstra's Algorithm function
    DijkstraAlgorithm(Graph, size, source);

    return 0;
}