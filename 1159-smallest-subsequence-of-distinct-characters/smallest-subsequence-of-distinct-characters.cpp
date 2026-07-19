class Solution {
public:
    string smallestSubsequence(string s) {
       string ans = "";
        vector<int> vis(26,0);     
        vector<int> occur(26,0);   

        for(char c : s)
            vis[c-'a']++;

        for(char c : s){

            int id = c-'a';
            vis[id]--;

            if(occur[id])
                continue;

            while(!ans.empty() && ans.back() > c && vis[ans.back()-'a'] > 0){

                occur[ans.back()-'a'] = 0;
                ans.pop_back();
            }

            ans += c;
            occur[id] = 1;
        }

        return ans;
    }
};