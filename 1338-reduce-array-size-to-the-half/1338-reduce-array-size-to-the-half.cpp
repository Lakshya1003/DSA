class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int , int> m;
        for(int i : arr) m[i]++;
        int c = 0;
        priority_queue<pair<int , int>> mh;
        for(auto &i : m){
            int freq = i.second;
            int el = i.first;
            pair<int , int> c = {freq , el};
            mh.push(c);
        }
        int d = n;
        while(d != 0){
            c++;
            int t = mh.top().first;
            mh.pop();
            d -= t;
            if(d <= n / 2){
                break;
            }
        }
        return c;

    }
};