#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>>result;
    void dfs(int n, vector<vector<int>>& graph, vector<int>path, int node) {
        path.push_back(node);

        if (node == n - 1) {
            result.push_back(path);
            return;
        }
        for (int x : graph[node]) {
            dfs(n, graph, path, x);
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>path;
        dfs(n, graph, path, 0);
        return result;


    }
};

int main()
{
    return 0;
}