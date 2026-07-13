class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string a = "123456789";

        int len = to_string(low).length();
        int hlen = to_string(high).length();

        for (int k = len; k <= hlen; k++) {   
            int l = 0;
            int h = k - 1;

            while (h < 9) {
                string cur = a.substr(l, k);
                int ch = stoi(cur);

                if (ch >= low && ch <= high)
                    ans.push_back(ch);

                l++;
                h++;
            }
        }

        return ans;
    }
};