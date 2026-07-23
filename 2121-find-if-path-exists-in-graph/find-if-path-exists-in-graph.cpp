class Solution {
public:


  void dfs(vector<vector<int>>& adj, int node, int dest,
             vector<int>& vis, bool &path) {

        if(node == dest) {
            path = true;
            return;
        }

        vis[node] = 1;

        for(int nxt : adj[node]) {
            if(!vis[nxt]) {
                dfs(adj, nxt, dest, vis, path);
                if(path) return;
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges,
                   int source, int destination) {

        vector<vector<int>> adj(n);

        for(int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        vector<int> vis(n, 0);
        bool path = false;

        dfs(adj, source, destination, vis, path);

        return path;
    }
};