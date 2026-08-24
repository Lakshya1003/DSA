class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& nin) {
        vector<vector<int>> ans;

        int s2 = nin[0];
        int e2 = nin[1];
        bool f = false;

        for (int i = 0; i < in.size(); i++) {
            int s3 = in[i][0];
            int e3 = in[i][1];

            if (s3 > s2 && !f) {
                ans.push_back({s2, e2});
                ans.push_back({s3, e3});
                f = true;
            }
            else {
                ans.push_back({s3, e3});
            }
        }

     
        if (!f) {
            ans.push_back({s2, e2});
        }

     
        in.clear();

        int s1 = ans[0][0];
        int e1 = ans[0][1];

        for (int i = 1; i < ans.size(); i++) {
            s2 = ans[i][0];
            e2 = ans[i][1];

            if (s2 > e1) {
                in.push_back({s1, e1});
                s1 = s2;
                e1 = e2;
            }
            else {
                e1 = max(e1, e2);
            }
        }

        in.push_back({s1, e1});

        return in;
    }
};