class Solution {
public:
    int compress(vector<char>& chars) {
        int l = 0;

        for (int i = 0; i < chars.size();) {
            int cnt = i;
            int freq = 0;

            while (cnt < chars.size() && chars[cnt] == chars[i]) {
                freq++;
                cnt++;
            }

            chars[l++] = chars[i];

            if (freq > 1) {
                string s = to_string(freq);
                for (char ch : s) {
                    chars[l++] = ch;
                }
            }

            i = cnt;
        }

        return l;
    }
};