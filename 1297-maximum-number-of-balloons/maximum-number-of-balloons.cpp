class Solution {
public:
    int maxNumberOfBalloons(string text) {
        if(text.length()<7) return 0;
        sort(text.begin() , text.end());
        unordered_map<char , int> cf;
        for(char i : text){
            if(i == 'b' || i == 'l' || i == 'o' || i == 'a' || i == 'n') cf[i]++;
        }
        if(cf.empty()) return 0;
        int p = 0;
        p = cf['b'];
        p = min(p , cf['a']);
        p = min(p , cf['l'] / 2);
        p = min(p , cf['o']/2);
        p = min(p , cf['n']);
        return p;
    }
};