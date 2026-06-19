class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ps ;
        int cur = 0;
        for(int i = 0 ; i < gain.size() ; i++ ){
            ps.push_back(cur);
            cur += gain[i];
        }
        ps.push_back(cur);
        int ma = ps[0];
        for(int i : ps){
            if( i > ma) ma = i;
        }
        return ma;

    }
};