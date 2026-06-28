class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        if (arr[0] != 1)
            arr[0] = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (abs(arr[i] - arr[i - 1]) <= 1) {
                continue;
            }
            else{
                arr[i] = arr[i - 1] + 1;
            }
        }
        int ans = INT_MIN;
        for (int i : arr)
            ans = max(ans, i);

        return ans;
    }
};