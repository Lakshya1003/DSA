class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        priority_queue<pair<int, vector<int>>> maxh;
        vector<vector<int>> ans;

        for (auto &i : p) {
            int x = i[0];
            int y = i[1];

            int d = x * x + y * y;

            if (maxh.size() < k) {
                maxh.push({d, i});
            }
            else if (maxh.top().first > d) {
                maxh.pop();
                maxh.push({d, i});
            }
        }

        while (!maxh.empty()) {
            ans.push_back(maxh.top().second);
            maxh.pop();
        }

        return ans;
    }
};