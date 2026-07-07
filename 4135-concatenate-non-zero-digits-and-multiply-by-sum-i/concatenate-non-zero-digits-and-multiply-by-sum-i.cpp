class Solution {
public:
    long long sumAndMultiply(int n){
        long long sum = 0;
        long long number = 0;
        string a  = to_string(n);
        int t = 1;
        for(int i = a.size() - 1 ; i >= 0 ; i--){
            if(a[i] != '0'){
                long long d = a[i] - '0';
                sum += d;
                d *= t;
                number += d;
                t *= 10;
            }
        }
        long long ans = number * sum;
        return ans;
    }
};