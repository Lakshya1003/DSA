class Solution {
public:


    void fun(vector<vector<char>> &v , int j , int n , string &s , vector<string> &ans , string d){
        if(j == n){
            ans.push_back(s);
            return;
        }
        int a = d[j] - '0';
        int b = v[a].size();
        for(int i = 0 ; i < b ; i++){
            s += v[a][i];
            fun(v,j + 1,n,s,ans,d);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<vector<char>> v(10);
        v[2] = {'a','b','c'};
        v[3] = {'d','e','f'};
        v[4] = {'g','h','i'};
        v[5] = {'j','k','l'};
        v[6] = {'m','n','o'};
        v[7] = {'p','q','r','s'};
        v[8] = {'t','u','v'};
        v[9] = {'w','x','y','z'};
        vector<string> ans;
        int n = digits.size();
        string s = "";
        fun(v , 0 , n , s ,ans , digits );
        return ans;
    }
};