class Solution {
public:
    struct Compare {
        bool operator()(const pair<int, string>& a,
                        const pair<int, string>& b) {
            if (a.first == b.first)
                return a.second < b.second; // lexicographically larger is worse
            return a.first > b.first;       // lower frequency is worse
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;
        vector<string> ans;
        priority_queue<pair<int, string>, vector<pair<int, string>>, Compare>
            mh;
        for (string i : words)
            m[i]++;
        for (auto& i : m) {
            string a = i.first;
            int f = i.second;
            if (mh.size() < k) {
                mh.push({f, a});
            } else {
                int d = mh.top().first;
                if (mh.top().first < f ||
                    (mh.top().first == f && mh.top().second > a)) {
                    mh.pop();
                    mh.push({f, a});
                }
            }
        }
        while (!mh.empty()) {
            string a = mh.top().second;
            ans.push_back(a);
            mh.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};