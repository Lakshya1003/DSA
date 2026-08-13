class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int ans = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++) {
            int a = nums[i];

            int l = i + 1;
            int r = n - 1;

            while (l < r) {
                int b = nums[l];
                int c = nums[r];

                int sum = a + b + c;
                int diff = abs(t - sum);
                int ansd = abs(t - ans);

                if (diff < ansd) {
                    ans = sum;
                }

                if (sum < t) {
                    l++;
                }
                else if (sum > t) {
                    r--;
                }
                else {
                    return sum;
                }
            }
        }

        return ans;
    }
};