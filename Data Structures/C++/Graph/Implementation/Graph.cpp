//
// Created by vivek on 20-02-2023.
//

#include "Graph.h"

void Graph::BFS(int (*G)[7], int start, int n) {
    int i{start}, j, visited[7] = {0};
    std::queue<int> Q;
    printf("%d ", i);
    visited[i] = 1;
    Q.push(i);

    while (not Q.empty()) {
        i = Q.front();
        Q.pop();

        for (int j{1}; j < n; j++) {
            if (G[i][j] == 1 and visited[j] == 0) {
                printf("%d ", j);
                visited[j] = 1;
                Q.push(j);
            }
        }
    }
}

void Graph::DFS(int (*G)[7], int start, int n) {
    static int visited[7] = {0};
    if (visited[start] == 0) {
        printf("%d ", start);
        visited[start] = 1;
        for (int j{1}; j < n; j++) {
            if (G[start][j] == 1 and visited[j] == 0)
                DFS(G, j, n);
        }
    }
}
