class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> store;
        bool verify = false;
        int tempnum = x;
        while (tempnum > 0) {
            int temp = tempnum;
            temp %= 10;
            store.push_back(temp);
            tempnum /= 10;
        }
        if (x == 0) {
            return true;
        } else {
            for (int i = 0; i < store.size(); i++) {
                if (store[i] == store[store.size() - 1 - i]) {
                    verify = true;
                } else {
                    verify = false;
                    break;
                }
            }
        }
        return verify;
    }
};