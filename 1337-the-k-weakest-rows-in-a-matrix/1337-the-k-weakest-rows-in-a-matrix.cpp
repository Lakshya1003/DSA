class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int ,int>> v;
        for(int i = 0 ; i < mat.size() ; i++){
            int sc = 0;
            for(int j = 0 ; j < mat[0].size() ; j++){
                if(mat[i][j] == 1)sc++;
            }
            v.push_back({sc,i});
        }
        sort(v.begin() , v.end());
        vector<int> ans(k);
        for(int i = 0 ; i < k ; i++){
            ans[i] = v[i].second;
        }
        return ans;

    }
};