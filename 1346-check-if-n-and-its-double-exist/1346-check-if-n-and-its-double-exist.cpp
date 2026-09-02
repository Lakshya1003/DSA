class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++) {
            int target = 2 * arr[i];

            int l = 0;
            int h = arr.size() - 1;

            while (l <= h) {
                int mid = l + (h - l) / 2;

                if (arr[mid] < target) {
                    l = mid + 1;
                }
                else if (arr[mid] > target) {
                    h = mid - 1;
                }
                else {
                    if (mid != i)
                        return true;

                    
                    if (mid + 1 < arr.size() && arr[mid + 1] == target)
                        return true;

                    if (mid - 1 >= 0 && arr[mid - 1] == target)
                        return true;

                    break;
                }
            }
        }

        return false;
    }
};