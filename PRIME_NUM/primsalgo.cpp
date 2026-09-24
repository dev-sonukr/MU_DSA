#include <bits/stdc++.h>
using namespace std;

#define V 5

int minKey(int key[], bool mst[]) {
    int min = INT_MAX, idx;
    for (int i = 0; i < V; i++)
        if (!mst[i] && key[i] < min)
            min = key[i], idx = i;
    return idx;
}

void primMST(int graph[V][V]) {
    int parent[V], key[V]; bool mst[V] = {0};
    fill(key, key + V, INT_MAX); key[0] = 0; parent[0] = -1;

    for (int i = 0; i < V-1; i++) {
        int u = minKey(key, mst); mst[u] = true;
        for (int v = 0; v < V; v++)
            if (graph[u][v] && !mst[v] && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " : " << graph[i][parent[i]] << "\n";
}

int main() {
    int graph[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };
    primMST(graph);
}
