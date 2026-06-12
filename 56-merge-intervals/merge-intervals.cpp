class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        sort(inter.begin(), inter.end());

        vector<vector<int>> ans;
        vector<int> pri = inter[0];

        int f = pri[0];
        int e = pri[1];

        for (int i = 1; i < inter.size(); i++) {
            if (inter[i][0] > e) {     
                ans.push_back(pri);

                f = inter[i][0];
                e = inter[i][1];

                pri[0] = f;
                pri[1] = e;
            } else {                    
                if (inter[i][1] > e) {
                    e = inter[i][1];
                    pri[1] = e;
                }
            }
        }

        ans.push_back(pri);
        return ans;
    }
};