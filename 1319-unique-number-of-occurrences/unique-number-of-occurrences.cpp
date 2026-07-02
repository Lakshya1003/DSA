class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int> m;
       for (int x : arr)
            m[x]++;

        set<int> s;

        for (auto &p : m) {
            int freq = p.second;

            if (s.contains(freq)) {   
                return false;
            }

            s.insert(freq);
        }

        return true;
    }
};