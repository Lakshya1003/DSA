class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis, int& nodes,
             int& degreeSum) {

        vis[node] = true;
        nodes++;
        degreeSum += adj[node].size();

        for (int neighbour : adj[node]) {
            if (!vis[neighbour]) {
                dfs(neighbour, adj, vis, nodes, degreeSum);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int count = 0;
        vector<bool> vis(n, false);
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                int nodes = 0;
                int degreeSum = 0;

                dfs(i, adj, vis, nodes, degreeSum);

                int actualEdges = degreeSum / 2;

                if (actualEdges == (nodes * (nodes - 1)) / 2) {
                    count++;
                }
            }}
            return count;
        }
    };