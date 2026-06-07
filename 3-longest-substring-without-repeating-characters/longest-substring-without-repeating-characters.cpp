class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int len = 0;
        int maxl = 0;
        int left = 0;

        for(int i = 0; i < s.length(); i++){
            map[s[i]]++;

            while(map[s[i]] > 1){
                map[s[left]]--;
                left++;
                len--;
            }

            len++;

            if(len > maxl){
                maxl = len;
            }
        }

        return maxl;
    }
};