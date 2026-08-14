class Solution {
public:
    int maximumLengthSubstring(string s) {
        
    int n = s.size();
        unordered_map<int, int> m;
        int k = 2;
        int l = 0;
        int h = 0;
        int cur = 0;
        int ans = 0;

        while (h < n) {
            int a = s[h];

            if (!m.contains(a)) {
                m[a]++;
                cur++;
            }
            else {
                if (m[a] == k) {
                    ans = max(ans, cur);

                    while (l < h) {
                        int b = s[l++];

                        m[b]--;
                        cur--;

                        if (m[b] == 0)
                            m.erase(b);

                        if (b == a)
                            break;
                    }

                   
                    m[a]++;
                    cur++;
                }
                else {
                    m[a]++;
                    cur++;
                }
            }

            h++;
        }

        ans = max(ans, cur);
        return ans;
    }
};