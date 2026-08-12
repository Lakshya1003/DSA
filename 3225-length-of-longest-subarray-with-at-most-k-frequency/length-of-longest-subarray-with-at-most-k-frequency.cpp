class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> m;

        int l = 0;
        int h = 0;
        int s = 0;
        int ans = 0;

        while (h < n) {
            int a = nums[h];

            if (!m.contains(a)) {
                m[a]++;
                s++;
            }
            else {
                if (m[a] == k) {
                    ans = max(ans, s);

                    while (l < h) {
                        int b = nums[l++];

                        m[b]--;
                        s--;

                        if (m[b] == 0)
                            m.erase(b);

                        if (b == a)
                            break;
                    }

                   
                    m[a]++;
                    s++;
                }
                else {
                    m[a]++;
                    s++;
                }
            }

            h++;
        }

        ans = max(ans, s);
        return ans;
    }
};