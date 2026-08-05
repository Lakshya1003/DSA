class Solution {
public:

    void dfs(vector<vector<int>> &adj, vector<int> &vis, int node) {
        vis[node] = 1;

        for (int j = 0; j < adj[node].size(); j++) {
            int nxt = adj[node][j];

            if (vis[nxt] == 0) {
                dfs(adj, vis, nxt);
            }
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& in) {

        vector<vector<int>> adj(n);

        for (auto &i : in) {
            int a = i[0];
            int b = i[1];

            adj[a].push_back(b);
        }

        vector<int> vis(n, 0);

       
        dfs(adj, vis, k);

        
        for (auto &i : in) {
            int a = i[0];
            int b = i[1];

            if (vis[a] == 0 && vis[b] == 1) {
                vector<int> ans;

                for (int j = 0; j < n; j++) {
                    ans.push_back(j);
                }

                return ans;
            }
        }

        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (vis[i] == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};