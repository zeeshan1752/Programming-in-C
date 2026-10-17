#include <limits.h>
#include <stdio.h>

#define MAX_VERTICES 100

static int prim_mst(int graph[MAX_VERTICES][MAX_VERTICES], int vertex_count)
{
    int parent[MAX_VERTICES];
    int key[MAX_VERTICES];
    int included[MAX_VERTICES] = {0};

    if (vertex_count < 1 || vertex_count > MAX_VERTICES) {
        fprintf(stderr, "Vertex count must be from 1 to %d.\n", MAX_VERTICES);
        return 0;
    }

    for (int row = 0; row < vertex_count; row++) {
        for (int column = 0; column < vertex_count; column++) {
            if (graph[row][column] < 0 ||
                graph[row][column] != graph[column][row]) {
                fprintf(stderr, "Enter a symmetric adjacency matrix with non-negative weights.\n");
                return 0;
            }
        }
    }

    for (int vertex = 0; vertex < vertex_count; vertex++) {
        key[vertex] = INT_MAX;
        parent[vertex] = -1;
    }
    key[0] = 0;

    for (int count = 0; count < vertex_count; count++) {
        int next = -1;
        for (int vertex = 0; vertex < vertex_count; vertex++) {
            if (!included[vertex] &&
                (next == -1 || key[vertex] < key[next])) {
                next = vertex;
            }
        }

        if (next == -1 || key[next] == INT_MAX) {
            fprintf(stderr, "The graph is disconnected; no spanning tree exists.\n");
            return 0;
        }
        included[next] = 1;

        for (int neighbor = 0; neighbor < vertex_count; neighbor++) {
            int weight = graph[next][neighbor];
            if (weight > 0 && !included[neighbor] && weight < key[neighbor]) {
                key[neighbor] = weight;
                parent[neighbor] = next;
            }
        }
    }

    int total_weight = 0;
    puts("Minimum spanning tree edges:");
    for (int vertex = 1; vertex < vertex_count; vertex++) {
        printf("%d - %d (weight %d)\n", parent[vertex], vertex, key[vertex]);
        total_weight += key[vertex];
    }
    printf("Total weight: %d\n", total_weight);
    return 1;
}

int main(void)
{
    int graph[MAX_VERTICES][MAX_VERTICES] = {0};
    int vertex_count;

    printf("Number of vertices (1-%d): ", MAX_VERTICES);
    if (scanf("%d", &vertex_count) != 1 ||
        vertex_count < 1 || vertex_count > MAX_VERTICES) {
        fprintf(stderr, "Invalid vertex count.\n");
        return 1;
    }

    puts("Enter the adjacency matrix (use 0 where there is no edge):");
    for (int row = 0; row < vertex_count; row++) {
        for (int column = 0; column < vertex_count; column++) {
            if (scanf("%d", &graph[row][column]) != 1) {
                fprintf(stderr, "Invalid matrix input.\n");
                return 1;
            }
        }
    }

    return prim_mst(graph, vertex_count) ? 0 : 1;
}
