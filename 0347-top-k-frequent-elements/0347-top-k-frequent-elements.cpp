class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> map;
        vector<int> ans;
        priority_queue<pair<int ,int> , vector<pair<int ,int>> , greater<pair<int ,int>>> mh;
        for(int i : nums) map[i]++;
        for(auto &i : map){
            int ele = i.first;
            int fre = i.second;
            pair<int , int> cur = {fre , ele};
            if(mh.size() < k)mh.push(cur);
            else{
                int top_freq = mh.top().first;
                if(top_freq < fre){
                    mh.pop();
                    mh.push(cur);
                }
                else{
                    continue;
                }
            }
        }
        while(!mh.empty()){
            ans.push_back(mh.top().second);
            mh.pop();
        }
        return ans;
    }
};