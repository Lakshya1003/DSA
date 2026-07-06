class Solution {
public:
static bool cmp(vector<int> &a, vector<int> &b){
    if(a[0] == b[0])
        return a[1] > b[1];
    return a[0] < b[0];
}
    int removeCoveredIntervals(vector<vector<int>>& it) {
        sort(it.begin() , it.end(),cmp);
        int ans = it.size();
        int cmax = 0; 
        for(int i = 0 ; i < it.size() ; i++){
            if(it[i][1] > cmax) cmax = it[i][1];
            else if(it[i][1] <= cmax) ans--;
        }
        return ans;
    }
};