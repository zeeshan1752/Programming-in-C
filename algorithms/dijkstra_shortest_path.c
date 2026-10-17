#include <limits.h>
#include <stdio.h>

#define MAX_VERTICES 10

static int dijkstra(const int graph[MAX_VERTICES][MAX_VERTICES],
                    int vertex_count, int source)
{
    int distance[MAX_VERTICES];
    int visited[MAX_VERTICES] = {0};

    if (vertex_count < 1 || vertex_count > MAX_VERTICES ||
        source < 0 || source >= vertex_count) {
        fprintf(stderr, "Invalid graph size or source vertex.\n");
        return 0;
    }

    for (int from = 0; from < vertex_count; from++) {
        for (int to = 0; to < vertex_count; to++) {
            if (graph[from][to] < 0) {
                fprintf(stderr, "Dijkstra's algorithm requires non-negative edge weights.\n");
                return 0;
            }
        }
    }

    for (int vertex = 0; vertex < vertex_count; vertex++) {
        distance[vertex] = INT_MAX;
    }
    distance[source] = 0;

    for (int step = 0; step < vertex_count; step++) {
        int next = -1;
        for (int vertex = 0; vertex < vertex_count; vertex++) {
            if (!visited[vertex] &&
                (next == -1 || distance[vertex] < distance[next])) {
                next = vertex;
            }
        }

        if (next == -1 || distance[next] == INT_MAX) {
            break;
        }
        visited[next] = 1;

        for (int neighbor = 0; neighbor < vertex_count; neighbor++) {
            int weight = graph[next][neighbor];
            if (!visited[neighbor] && weight > 0 &&
                distance[next] <= INT_MAX - weight &&
                distance[next] + weight < distance[neighbor]) {
                distance[neighbor] = distance[next] + weight;
            }
        }
    }

    for (int vertex = 0; vertex < vertex_count; vertex++) {
        if (vertex == source) {
            continue;
        }
        if (distance[vertex] == INT_MAX) {
            printf("Vertex %d is unreachable from %d.\n", vertex, source);
        } else {
            printf("Shortest distance from %d to %d: %d\n",
                   source, vertex, distance[vertex]);
        }
    }
    return 1;
}

int main(void)
{
    const int graph[MAX_VERTICES][MAX_VERTICES] = {
        {0, 4, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0},
        {0, 0, 7, 0, 9, 14, 0},
        {0, 0, 0, 9, 0, 10, 2},
        {8, 11, 4, 14, 10, 0, 2},
        {0, 0, 0, 0, 2, 2, 0}
    };

    return dijkstra(graph, 7, 0) ? 0 : 1;
}
