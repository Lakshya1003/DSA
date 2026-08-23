class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin() , in.end());
        vector<vector<int>> ans;
        int s1 = in[0][0];
        int e1 = in[0][1];
        for(int i = 1 ; i < in.size() ; i++){
            int s2 = in[i][0];
            int e2 = in[i][1];
            if(s2 > e1){
                // no overlapping
                ans.push_back({s1,e1});
                s1 = s2;
                e1 = e2;
            }
            else{
                e1 = max(e1,e2);
            }
        }
        ans.push_back({s1,e1});
        return ans;
    }
};