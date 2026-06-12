class Solution {
public:
    void co(int n, int &oc) {
        if (n == 0)
            return;

        if (n % 2 == 1)
            oc++;

        co(n / 2, oc);
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0 ; i <= n ; i++ ){
            int b = 0;
            co(i , b);
            ans.push_back(b);
        }
        return ans;
    }
};