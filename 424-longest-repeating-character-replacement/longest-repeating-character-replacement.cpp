class Solution {
public:
   int maxfreq(vector<int>& arr) {
        int freq = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            freq = max(freq, arr[i]);
        }
        return freq;
    }

    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);

        int l = 0;
        int res = 0;

        for (int h = 0; h < s.length(); h++) {
            freq[s[h] - 'A']++;

            int len = h - l + 1;
            int mfreq = maxfreq(freq);

            while (len - mfreq > k) {
                freq[s[l] - 'A']--;
                l++;

                len = h - l + 1;
                mfreq = maxfreq(freq);
            }

            res = max(res, len);
        }

        return res;

    }
};