class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        unordered_map<string,int> target;
        for (string i : words)
            target[i]++;

        int wl = words[0].length();

        vector<int> ans;

        for (int start = 0; start < wl; start++) {

            unordered_map<string,int> m = target;   

            int wc = words.size();                  

            int l = start;
            int h = start;

            while (h + wl <= s.length()) {

                string cur = s.substr(h, wl);

                if (m.contains(cur)) {

                    m[cur]--;
                    wc--;

            
                    while (m[cur] < 0) {
                        string dash = s.substr(l, wl);
                        m[dash]++;
                        wc++;
                        l += wl;
                    }

                    
                    if (wc == 0) {

                        ans.push_back(l);

                        
                        string dash = s.substr(l, wl);
                        m[dash]++;
                        wc++;
                        l += wl;
                    }

                }
                else {

                   

                    while (l < h) {
                        string dash = s.substr(l, wl);
                        m[dash]++;
                        wc++;
                        l += wl;
                    }

                   
                    l = h + wl;

                    
                    m = target;
                    wc = words.size();
                }

                h += wl;
            }
        }

        return ans;
    }
};