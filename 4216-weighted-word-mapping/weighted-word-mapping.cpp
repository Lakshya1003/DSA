class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<char , int> m;
        for(int i = 0 ; i < weights.size() ; i++){
            char c = 'a' + i;
            m[c] = weights[i];
        }
        string ans = "";
        for(int i = 0 ; i < words.size() ; i++){
            int s = 0;
            for(int j = 0 ; j < words[i].length() ; j++){
                s += m[words[i][j]];
            }
            s %= 26;
            char c = 'z' - s;
            ans += c;
        }
        return ans;
    }
};