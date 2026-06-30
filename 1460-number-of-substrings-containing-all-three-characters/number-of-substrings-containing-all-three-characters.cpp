class Solution {
public:
    int numberOfSubstrings(string s) {
        int l = 0;
        int h = 0;
        vector<int> v(3,0);
        int count = 0;
        while(h < s.length()){
            int d = s[h] - 'a';
            v[d]++;
            int len = h - l + 1;
            if(len >= 3){
                if(v[0] > 0 && v[1] >0 && v[2] > 0){
                    while(v[0] > 0 && v[1] > 0 && v[2] > 0){
    
                            count += s.length() - h;
                        
                        
                        int a = s[l] - 'a';
                        v[a]--;
                        l++;
                        len = h - l + 1;
                    }
                }
            }
            h++;
        }
        return count;
    }
};