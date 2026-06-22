class Solution {
public:
    int maxNumberOfBalloons(string text) {
        if(text.length()<7) return 0;
        unordered_map<char , int> cf;
        for(char i : text){
            if(i == 'b' || i == 'l' || i == 'o' || i == 'a' || i == 'n') cf[i]++;
        }
        if(cf.empty()) return 0;
        int p = min({cf['a'] , cf['b'] , cf['l'] / 2 , cf['o']/2 , cf['n']  });
        return p;
    }
};