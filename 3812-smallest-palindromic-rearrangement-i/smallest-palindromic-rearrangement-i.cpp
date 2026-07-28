class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.length() == 1 ) return s;
        string mid = "" , left = "";
        vector<int> freq(26,0);
        for(char i : s){
            int a = i - 'a';
            freq[a]++;
        }
        for (int i = 0; i < 26; i++) {
           
            for (int j = 0; j < freq[i] / 2; j++)
                left += char('a' + i);

            
            if (freq[i] % 2)
                mid += char('a' + i);
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};