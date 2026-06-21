class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int h = 0;
        int l = 0;
        vector<int> ans;
        priority_queue<pair<int, int>> pq;

        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i], i});

            if (i >= k - 1) {

                while (!pq.empty() && pq.top().second <= i - k) {
                    pq.pop();
                }

                ans.push_back(pq.top().first);
            }
        }
        return ans;
    }
};