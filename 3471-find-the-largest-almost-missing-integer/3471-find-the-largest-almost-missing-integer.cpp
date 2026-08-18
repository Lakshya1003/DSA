class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> m;

        for (int i = 0; i <= nums.size() - k; i++) {
            unordered_set<int> s;

            for (int j = 0; j < k; j++) {
                s.insert(nums[i + j]);
            }

            for (int x : s) {
                m[x]++;
            }
        }

        int mx = INT_MIN;

        for (auto &i : m) {
            if (i.second == 1) {
                mx = max(mx, i.first);
            }
        }

        return mx == INT_MIN ? -1 : mx;
    }
};