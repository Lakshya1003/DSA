class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {
        vector<vector<int>> ans;
        int i = 0 , j = 0;
        int n = f.size() ;
        int m = s.size();
        while(i < n && j < m){
            int s1 = f[i][0];
            int e1 = f[i][1];
            int s2 = s[j][0];
            int e2 = s[j][1];
            if(s1 <= s2){
                if(e1 >= s2){
                    int s = max(s1,s2);
                    int e = min(e1,e2);
                    ans.push_back({s,e});
                }
            }
            else{
                if(e2 >= s1){
                    int s = max(s1,s2);
                    int e = min(e1,e2);
                    ans.push_back({s,e});
                }
            }
            if(e1 <= e2){
                i++;
            }
            else {
                j++;
            }
        }
        return ans;
        
    }
};