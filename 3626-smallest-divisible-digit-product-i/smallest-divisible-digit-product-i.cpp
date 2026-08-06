class Solution {
public:

    int pro(int n){
        string a = to_string(n);
        int ans = 1;
        for(int i = 0 ; i < a.size() ; i++){
            ans *= (a[i] - '0');
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        int ans = 0;
        for(int i = 0 ; i <= 10 ; i++){
            int a = n + i;
            int b = pro(a);
            if(b % t == 0){
                ans = a;
                break;
            }

        }
        return ans;
    }
};