class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> m;
        for (char c : s) m[c]++;
        
        // Priority queue defaults to a max-heap in C++
        priority_queue<pair<int, char>> pq;
        for (auto& i : m) {
            // Push positive frequencies so the most frequent chars stay at the top
            pq.push({i.second, i.first});
        } 
        
        string ans = "";
        pair<int, char> p = {0, '0'}; 
        
        while (!pq.empty()) {
            int freq = pq.top().first;
            char ch = pq.top().second;
            pq.pop();
            
            ans += ch;
            freq--; // Decrease frequency by 1 since we just used this char
            
            // If the previous character still has remaining frequency, push it back
            if (p.first > 0) {
                pq.push(p);
            }
            
            // Update the 'waiting' pair to the current character
            p = {freq, ch};
        }
        
        // If we couldn't place all characters, return an empty string
        if (ans.length() != s.length()) {
            return "";
        }
        
        return ans;
    }
};