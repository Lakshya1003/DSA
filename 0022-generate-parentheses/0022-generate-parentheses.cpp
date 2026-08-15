class Solution {
public:

    void fun(vector<string> &ans , int o , int c , int n , string &s){
        if(o == n && c == n){
            ans.push_back(s);
            return;
        }
        if(o < n ){
             s += '(';
            fun(ans, o + 1, c, n, s);
            s.pop_back();
        }
        if(c < o ){
            s += ')';
            fun(ans, o, c + 1, n, s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        fun(ans , 0 , 0 , n , s);
        return ans;
    }
};