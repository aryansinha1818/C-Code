#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

void printAdjList(int n, vector<pair<int, int>> edges)
{
    vector<vector<int>> adjList(n);
    for (auto node : edges)
    {
        int u = node.first;
        int v = node.second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << ": ";
        for (auto it : adjList[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    vector<pair<int, int>> edges = {
        {0, 1}, {0, 4}, {1, 2}, {1, 3}, {1, 4}, {2, 3}, {3, 4}};
    printAdjList(n, edges);
    return 0;
}